/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 19:42:04 by jdelattr          #+#    #+#             */
/*   Updated: 2026/07/06 20:13:26 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
	std::cout << "Intern constructor called. " << std::endl;
}

Intern::Intern(const Intern& other)
{
	(void)other;
	std::cout << "Intern copy constructor called. " << std::endl;
}

Intern& Intern::operator=(const Intern& other)
{
	(void)other;
	std::cout << "Intern copy assignement operator called. " << std::endl;
	return (*this);
}

Intern::~Intern()
{
	std::cout << "Intern destructor called. " << std::endl;
}

AForm* Intern::createShrubbery(const std::string target) const
{
	return (new ShrubberyCreationForm(target));
}

AForm* Intern::createRobotomy(const std::string target) const
{
	return (new RobotomyRequestForm(target));
}

AForm* Intern::createPresidential(const std::string target) const
{
	return (new PresidentialPardonForm(target));
}

AForm* Intern::makeForm(const std::string formName, const std::string target) const
{
	const std::string names[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	FormCreator creators[3] = {&Intern::createShrubbery, &Intern::createRobotomy, &Intern::createPresidential};

	for (int i = 0; i < 3; ++i)
	{
		if (formName == names[i])
		{
			std::cout << "Intern creates " << formName << std::endl;
			return ((this->*creators[i])(target));
		}
	}
	std::cout << "Intern cannot create " << formName << std::endl;
	return (NULL);
}
