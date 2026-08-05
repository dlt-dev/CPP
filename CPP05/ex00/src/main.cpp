/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 14:45:56 by jdelattr          #+#    #+#             */
/*   Updated: 2026/07/06 15:42:40 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include "Bureaucrat.hpp"
#include <iostream>

int main()
{

	// try
	// {
	// 	Bureaucrat a("Alice", 1);
	// 	std::cout << a << std::endl;

	// 	Bureaucrat b("Bob", 160);
	// 	std::cout << b << std::endl;

	// 	Bureaucrat c("Charlie", 75);
	// 	std::cout << c << std::endl;
	// }
	// catch (std::exception& e)
	// {
	// 	std::cout << "Erreur : " << e.what() << std::endl;
	// }


    struct { std::string name; int grade; } tests[] = {
    {"BILL", 1},
    {"JOE", 160},
    {"CHARLE", 75},
    {"lili", 160},
    {"JOHN", 0}

    
    };

    for (int i = 0; i < 5; i++)
    {

        
        
        try
        {
            Bureaucrat b(tests[i].name, tests[i].grade);
            std::cout << b << std::endl;
        }
        catch (std::exception& e)
        {
            std::cout << "Erreur sur " << tests[i].name << " : " << e.what() << std::endl;
        }
    }

    
    // Bureaucrat("BILL", 500);
    // Bureaucrat("JOJO", 8);
    

    // try
    // {
    //     Bureaucrat b("ROGER", 190);
    //     std::cout << b << std::endl;
    // }
    // catch (std::exception& e)
    // {
    //     std::cout << "Erreur sur " << "ROGER" << " : " << e.what() << std::endl;
    // }




    
}
