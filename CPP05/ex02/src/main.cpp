/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 14:45:56 by jdelattr          #+#    #+#             */
/*   Updated: 2026/07/06 19:24:39 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
	std::srand(static_cast<unsigned int>(std::time(NULL)));

	std::cout << "//Shrubbery (sign + success)" << std::endl;
	{
		Bureaucrat b("BILY", 100);
		ShrubberyCreationForm treeform("home");

		b.signForm(treeform);
		b.executeForm(treeform);
	}

	std::cout << "\n//Execute without sign (must fail)" << std::endl;
	{
		Bureaucrat a("BOB", 1);
		PresidentialPardonForm pardon("DANE");

		a.executeForm(pardon);
	}

    std::cout << "\n//Execute signed (success)" << std::endl;
	{
		Bureaucrat a("BOB", 1);
		PresidentialPardonForm pardon("DANE");

        a.signForm(pardon);
		a.executeForm(pardon);
	}

	std::cout << "\n//Grade too low to sign" << std::endl;
	{
		Bureaucrat c("CELINE", 150);
		RobotomyRequestForm robot("THE CAT");

		c.signForm(robot);
	}

	std::cout << "\n//Robotomy (sign + success)" << std::endl;
	{
		Bureaucrat x("JIJI", 1);
		RobotomyRequestForm robot("ZOE");

		x.signForm(robot);
		x.executeForm(robot);
	}

	return (0);
}
