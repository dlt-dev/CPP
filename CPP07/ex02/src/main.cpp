/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 18:15:44 by jdelattr          #+#    #+#             */
/*   Updated: 2026/08/16 18:25:20 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Array.hpp>

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }


#include "Array.hpp"
#include <iostream>
#include <string>

int main()
{

    //vide
	Array<int> empty;
	std::cout << "Empty array size: " << empty.size() << std::endl;

    //nombres de 10 en 10
	Array<int> numbers(5);
	for (unsigned int i = 0; i < numbers.size(); i++)
		numbers[i] = i * 10;

	std::cout << "Numbers: ";
	for (unsigned int i = 0; i < numbers.size(); i++)
		std::cout << numbers[i] << " ";
	std::cout << std::endl;



    
    // copie de l'array
	Array<int> copy(numbers);
	copy[0] = 333;

	std::cout << "Original[0]: " << numbers[0] << std::endl;
	std::cout << "Copy[0]:     " << copy[0] << std::endl;

	Array<int> assigned;
	assigned = numbers;
	assigned[1] = 888;

	std::cout << "Original[1]: " << numbers[1] << std::endl;
	std::cout << "Assigned[1]: " << assigned[1] << std::endl;

	try
	{
		std::cout << numbers[123] << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "exeption caught - out of index" << std::endl;
	}

    // test avec strings
	Array<std::string> strings(4);
	strings[0] = "il";
	strings[1] = "fait";
    strings[2] = "super";
	strings[3] = "beaaau";

	std::cout << "Strings: ";
	for (unsigned int i = 0; i < strings.size(); i++)
		std::cout << strings[i] << " ";
	std::cout << std::endl;

	return 0;
}