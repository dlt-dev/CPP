/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 17:09:44 by jdelattr          #+#    #+#             */
/*   Updated: 2026/08/16 18:28:02 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


#include <iostream>
#include <string>

template <typename T>
void printElement(const T& element)
{
	std::cout << element << " ";
}

void doubleInt(int& element)
{
	element *= 2;
}

int main()
{
	int intArray[5] = {1, 2, 3, 4, 5};
	size_t intLength = 5;

	std::cout << "Original int array: ";
	iter(intArray, intLength, printElement<int>);
	std::cout << std::endl;

	iter(intArray, intLength, doubleInt);

	std::cout << "After doubling: ";
	iter(intArray, intLength, printElement<int>);
	std::cout << std::endl;

	std::string stringArray[5] = {"il", "fait", "super", "beau", "!"};
	size_t stringLength = 5;

	std::cout << "String array: ";
	iter(stringArray, stringLength, printElement<std::string>);
	std::cout << std::endl;


	return 0;
}
