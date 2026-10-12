/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 18:15:44 by jdelattr          #+#    #+#             */
/*   Updated: 2026/09/25 17:58:38 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include "PmergeMe.hpp"

static bool isPositiveInteger(const char *value)
{
    std::string number(value);

    if (number.empty())
        return false;
    for (size_t i = 0; i < number.length(); ++i)
    {
        if (!std::isdigit(static_cast<unsigned char>(number[i])))
            return false;
    }

	if (number.length() > 10)
		return false;
	if (number.length() == 10 && number > "2147483647")
		return false;
	return true;
}



void printNumbers(const std::string& isWhat, const std::vector<int>& numbers)
{
	std::cout << isWhat << std::endl;

	for (size_t i = 0; i < numbers.size(); i++)
	{
		std::cout << numbers[i] << " " ;
	}

	std::cout << std::endl;
}


int main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cerr << "Error" << std::endl;
		return 1;
	}

	std::vector<int> input;
	for (int i = 1; i < ac; ++i)
	{
		if (!isPositiveInteger(av[i]))
		{
			std::cerr << "Error" << std::endl;
			return 1;
		}
		input.push_back(std::atoi(av[i]));
	}

	PmergeMe sorter(input);
	sorter.sortWithVector();
	sorter.sortWithList();

	printNumbers("Before: ", sorter.getInput());
	printNumbers("After:  ", sorter.getSortedVector());
	std::cout << "Time to process a range of " << input.size()
			  << " elements with std::vector : "
			  << sorter.getTimeVector() << " us" << std::endl;
	std::cout << "Time to process a range of " << input.size()
			  << " elements with std::list : "
			  << sorter.getTimeList() << " us" << std::endl;

	return 0;
}

