/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 19:02:51 by jdelattr          #+#    #+#             */
/*   Updated: 2026/08/19 16:49:31 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <climits> 

Span::Span(unsigned int n) : _maxS(n)
{
    
}

Span::Span(const Span& other) : _maxS(other._maxS), _numbers(other._numbers)
{
    
}

Span& Span::operator=(const Span& other)
{
    if (this == &other)
        return (*this);

    _maxS = other._maxS;
    _numbers = other._numbers;

    return (*this);
    
}

Span::~Span()
{
    
}

void Span::addNumber(int value)
{
    if (_numbers.size() >= _maxS)
        throw std::length_error("Your Span full !");

    _numbers.push_back(value);
    
}

int Span::shortestSpan() const
{
	if (_numbers.size() < 2)
		throw std::length_error("Not enough numbers, there is no Span :(");

	std::vector<int> sorted(_numbers);
	std::sort(sorted.begin(), sorted.end());

	int smallest = INT_MAX;

	for (size_t i = 0; i < sorted.size() - 1; i++)
	{
		int diff = sorted[i + 1] - sorted[i];
		if (diff < smallest)
			smallest = diff;
	}

	return smallest;
}

int Span::longestSpan() const
{
	if (_numbers.size() < 2)
		throw std::length_error("Not enough numbers, there is no Span :(");

	int minVal = *std::min_element(_numbers.begin(), _numbers.end());
	int maxVal = *std::max_element(_numbers.begin(), _numbers.end());

	return maxVal - minVal;
}







