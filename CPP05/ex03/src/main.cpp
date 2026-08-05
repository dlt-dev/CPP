/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 14:45:56 by jdelattr          #+#    #+#             */
/*   Updated: 2026/07/06 20:16:01 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
	std::srand(static_cast<unsigned int>(std::time(NULL)));

	Intern intern;
	Bureaucrat a("BILLY", 1);
	Bureaucrat b("JOJO", 150);

	std::cout << "\n// success" << std::endl;
	AForm* robotomy = intern.makeForm("robotomy request", "JIJI");
	if (robotomy != NULL)
	{
		a.signForm(*robotomy);
		a.executeForm(*robotomy);
		delete robotomy;
	}

	std::cout << "\n// simple sign failure" << std::endl;
	AForm* pardon = intern.makeForm("presidential pardon", "Arthur");
	if (pardon != NULL)
	{
		b.signForm(*pardon);
		a.signForm(*pardon);
		a.executeForm(*pardon);
		delete pardon;
	}

	std::cout << "\n// unknown form" << std::endl;
	AForm* unknown = intern.makeForm("coffee request", "office");
	if (unknown != NULL)
		delete unknown;

	return (0);
}
