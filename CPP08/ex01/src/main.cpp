/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 17:09:44 by jdelattr          #+#    #+#             */
/*   Updated: 2026/08/19 16:50:28 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


#include <iostream>
#include <string>


int main()
{

	// test 42
	
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	// autrs tests

	// Test 2: depssement de caopacite
	try
	{
		sp.addNumber(42);
	}
	catch (std::exception& e)
	{
		std::cout << "Caught: " << e.what() << std::endl;
	}

	// Test 3: pas assez de nombres pour un span
	try
	{
		Span empty(3);
		empty.addNumber(1);
		empty.shortestSpan();
	}
	catch (std::exception& e)
	{
		std::cout << "Caught: " << e.what() << std::endl;
	}

	// Test 4: remplissage via addRange
	
	std::vector<int> data;
	for (int i = 0; i < 10000; i++)
		data.push_back(i);

	Span bigSpan(10000);
	bigSpan.addRange(data.begin(), data.end());

	std::cout << "Big span shortest: " << bigSpan.shortestSpan() << std::endl;
	std::cout << "Big span longest:  " << bigSpan.longestSpan() << std::endl;

	// Test 5: depasse capacite
	try
	{
		Span tooSmall(5);
		tooSmall.addRange(data.begin(), data.end());
	}
	catch (std::exception& e)
	{
		std::cout << "Caught: " << e.what() << std::endl;
	}

	return 0;
}
