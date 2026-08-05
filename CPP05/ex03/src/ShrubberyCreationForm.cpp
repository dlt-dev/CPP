/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 18:34:41 by jdelattr          #+#    #+#             */
/*   Updated: 2026/07/06 18:34:42 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target)
: AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm constructor called. " << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
: AForm(other), _target(other._target)
{
	std::cout << "ShrubberyCreationForm copy constructor called. " << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	if (this != &other)
		AForm::operator=(other);
	std::cout << "ShrubberyCreationForm copy assignement operator called. " << std::endl;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called. " << std::endl;
}

void ShrubberyCreationForm::executeAction() const
{
	std::ofstream file((this->_target + "_shrubbery").c_str());
	if (!file)
	{
		std::cout << "Could not create " << this->_target << "_shrubbery" << std::endl;
		return ;
	}
	file << "               _-_" << std::endl;
	file << "            /~~   ~~\\" << std::endl;
	file << "         /~~         ~~\\" << std::endl;
	file << "        {               }" << std::endl;
	file << "         \\  _-     -_  /" << std::endl;
	file << "           ~  \\ //  ~" << std::endl;
	file << "        _- -   | | _- _" << std::endl;
	file << "          _ -  | |   -_" << std::endl;
	file << "              // \\" << std::endl;
	file.close();
}
