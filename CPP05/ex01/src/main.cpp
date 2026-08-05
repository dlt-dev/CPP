/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 14:45:56 by jdelattr          #+#    #+#             */
/*   Updated: 2026/07/06 17:05:37 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main()
{
    try
    {
        Bureaucrat alice("Alice", 2);
        Bureaucrat bob("Bob", 75);
        Bureaucrat carol("Carol", 150);

        Form taxForm("Tax return", 50, 25);
        Form topSecret("Top secret", 1, 1);

        std::cout << alice << std::endl;
        std::cout << bob << std::endl;
        std::cout << carol << std::endl;
        std::cout << taxForm << std::endl;
        std::cout << topSecret << std::endl;

        bob.signForm(taxForm);
        alice.signForm(taxForm);
        carol.signForm(topSecret);
        alice.signForm(topSecret);
    }
    catch (std::exception& e)
    {
        std::cout << "Erreur : " << e.what() << std::endl;
    }

    try
    {
        Form invalid("Invalid", 0, 10);
        std::cout << invalid << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << "Erreur sur Form : " << e.what() << std::endl;
    }

    
}
