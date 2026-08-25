/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 17:58:18 by jdelattr          #+#    #+#             */
/*   Updated: 2026/08/25 15:00:47 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

#include <vector>
#include <list>
#include <sstream>
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cctype>




enum ValueStatus
{
    GOOD_VALUE,
    NO_VALUE,
    VALUE_NEGATIVE,
    VALUE_TOO_LARGE
};

int isValidValue(const std::string& value, float& outValue)
{
    std::istringstream valueStr(value);

    if (!(valueStr >> outValue))
        return NO_VALUE;

    if (!valueStr.eof())
        return NO_VALUE;

    if (outValue < 0)
        return VALUE_NEGATIVE;
        
    if (outValue > 1000)
        return VALUE_TOO_LARGE;

    return GOOD_VALUE;
}

bool isValidDate(const std::string& date)
{
    if (date.length() != 10)
        return false;

    if (date[4] != '-' || date[7] != '-')
        return false;

    for (size_t i = 0; i < date.length(); i++)
    {
        if (i == 4 || i == 7)
            continue;
        if (!std::isdigit(static_cast<unsigned char>(date[i])))
            return false;
    }

    int year = std::atoi(date.substr(0, 4).c_str());
    int month = std::atoi(date.substr(5, 2).c_str());
    int day = std::atoi(date.substr(8, 2).c_str());

    if (month < 1 || month > 12)
        return false;

    const int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
    int maxDays = daysInMonth[month - 1];
    
    if (month == 2 && (year % 400 == 0 ||
        (year % 4 == 0 && year % 100 != 0)))
        maxDays = 29;

    if (day < 1 || day > maxDays)
        return false;

    return true;
}


int main(int ac, char **av)
{
    
    if (ac != 2)
    {
        std::cout << "Error: could not open file." << std::endl;
        return 1;
    }
    
    std::string inputFilename = av[1];
    float outValue; 

    
   try
   {
        BitcoinExchange be("data.csv");

        std::ifstream infile(inputFilename.c_str());
        if (!infile.is_open())
        {
            std::cout << "Error: could not open file." << std::endl;
            return 1;
        }
        std::string line;
        std::getline(infile, line);

        while (std::getline(infile, line))
        {
            if (line.find_first_not_of(" \t") == std::string::npos)
                continue;

            size_t pos = line.find(" | ");
            if (pos == std::string::npos)
            {
                std::cout << "Error: bad input => " << line << std::endl;
                continue;
            }
            std::string dateStr = line.substr(0, pos);
            std::string valueStr = line.substr(pos + 3);

            if (!isValidDate(dateStr))
            {
                std::cout << "Error: bad input => " << line << std::endl;
                continue;
            }

            int status = isValidValue(valueStr, outValue);

            switch (status)
            {
                case GOOD_VALUE:
                {
                    float rate = be.getRate(dateStr);
                    std::cout << dateStr << " => " << outValue << " = " << (outValue * rate) << std::endl;
                    break;
                }
                case NO_VALUE:
                    std::cout << "Error: bad input => " << line << std::endl;
                    continue;
                case VALUE_NEGATIVE:
                    std::cout << "Error: not a positive number." << std::endl;
                    continue;
                case VALUE_TOO_LARGE:
                    std::cout << "Error: too large a number." << std::endl;
                    continue;
                    
            }
        }
       
   }
   
   catch (std::exception& e)
   {
       std::cout << "Error: could not open file." << std::endl;
       return 1;
   }
   
    
    
}
