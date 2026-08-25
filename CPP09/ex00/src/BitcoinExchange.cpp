/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 15:54:10 by jdelattr          #+#    #+#             */
/*   Updated: 2026/08/25 13:44:14 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>
#include <vector>
#include <list>
#include <iostream>
#include <sstream>



BitcoinExchange::BitcoinExchange()
{

}


BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) : _price(other._price)
{
    
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
    if (this == &other)
        return (*this);

    _price = other._price;

    return *this;
        
}

BitcoinExchange::~BitcoinExchange()
{
    
}

BitcoinExchange::BitcoinExchange(const std::string& file)
{

    std::string line;
    std::string date;
    std::string rateData;
    size_t delimitData;
    float rate;

    

    std::ifstream infile(file.c_str());
    if (!infile.is_open())
        throw std::runtime_error("could not open file ... ");
    
    std::getline(infile, line); // skip la premiere ligne
    while (std::getline(infile, line))
    {
        //std::cout << line << std::endl;
        
        delimitData = line.find(',');
        date = line.substr(0, delimitData);
        rateData = line.substr(delimitData+ 1);

        std::istringstream inputStream(rateData);
        inputStream >> rate;
           
        // inserer dans la map
        // _price.insert(std:make_pair(date, rate)) aussi possible
        _price[date] = rate;

        std::cout << date << " -> " << rate << std::endl;
    }
    

}



float BitcoinExchange::getRate(const std::string& date) const
{
   
   
    std::map<std::string, float>::const_iterator it = _price.lower_bound(date);

    
    if (it != _price.end() && it->first == date)
    {
        return (it->second);
    }
        if (it == _price.begin())
    {
        throw std::runtime_error("no earlier date available");
    }
    --it;
    return it->second;

}
