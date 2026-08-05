/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 15:44:52 by jdelattr          #+#    #+#             */
/*   Updated: 2026/07/06 17:20:21 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string name, int gradeToSign, int gradeToExecute)
: _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
	std::cout << "Form constructor called. " << std::endl;
}

Form::Form(const Form& other)
: _name(other._name), _signed(other._signed), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
	std::cout << "Form copy constructor called. " << std::endl;
}

Form& Form::operator=(const Form& other)
{
	if (this != &other)
		this->_signed = other._signed;
	std::cout << "Form copy assignement operator called. " << std::endl;
	return (*this);
}

Form::~Form()
{
	std::cout << "Form destructor called. " << std::endl;
}

std::string Form::getName() const
{
	return (this->_name);
}

bool Form::getSigned() const
{
	return (this->_signed);
}

int Form::getGradeToSign() const
{
	return (this->_gradeToSign);
}

int Form::getGradeToExecute() const
{
	return (this->_gradeToExecute);
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw GradeTooLowException();
	this->_signed = true;
}

std::ostream & operator<<(std::ostream & o, const Form & b)
{
	o << b.getName() << ", signed: " << (b.getSigned() ? "yes" : "no")
	  << ", grade to sign: " << b.getGradeToSign()
	  << ", grade to execute: " << b.getGradeToExecute() << ".";
	return (o);
}

// condition ? val if true : val if false

// if (b.getSigned())
//     cout << "yes";
// else
//     cout << "no";