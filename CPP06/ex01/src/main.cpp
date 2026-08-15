/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 13:26:41 by jdelattr          #+#    #+#             */
/*   Updated: 2026/08/15 16:13:50 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


#include "Serializer.hpp"
#include <iostream>

int main()
{
	Data original;
	original.id = 1884;
	original.name = "DATE";

	uintptr_t raw = Serializer::serialize(&original);
	Data* result = Serializer::deserialize(raw);

	std::cout << "Original pointer:     " << &original << std::endl;
	std::cout << "Serialized (raw):     " << raw << std::endl;
	std::cout << "Deserialized pointer: " << result << std::endl;

	if (&original == result)
		std::cout << "Success: pointers match!" << std::endl;
	else
		std::cout << "Failure: pointers do not match." << std::endl;

	std::cout << "result->id = " << result->id << std::endl;
	std::cout << "result->name = " << result->name << std::endl;

    std::cout << std::endl;
    
    // Original pointer:     0x7ffee3a1b2c8
    // Serialized (raw):     140732665517768
    // Deserialized pointer: 0x7ffee3a1b2c8
    // Success: pointers match!
    // result->id = 42
    // result->name = hello


    original.id = 42;
	original.name = "hello";

	raw = Serializer::serialize(&original);
	result = Serializer::deserialize(raw);

	std::cout << "Original pointer:     " << &original << std::endl;
	std::cout << "Serialized (raw):     " << raw << std::endl;
	std::cout << "Deserialized pointer: " << result << std::endl;

	if (&original == result)
		std::cout << "Success: pointers match!" << std::endl;
	else
		std::cout << "Failure: pointers do not match." << std::endl;

	std::cout << "result->id = " << result->id << std::endl;
	std::cout << "result->name = " << result->name << std::endl;

    

	return 0;
}
    

