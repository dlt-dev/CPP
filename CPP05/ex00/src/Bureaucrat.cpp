/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 14:47:01 by jdelattr          #+#    #+#             */
/*   Updated: 2026/06/19 18:24:27 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) 
: _name(name)
{
    if (grade < 1)
        throw GradeTooHighException();

    if (grade > 150)
        throw GradeTooLowException();
        
    std::cout << "Bureaucrat constructor called. " << std::endl;
    _grade = grade;
    
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
: _name(other._name), _grade(other._grade)
{
    std::cout << "Bureaucrat copy constructor called. " << std::endl;
    
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    if (this != &other)
    {
        this->_grade = other._grade;
        std::cout << "Bureaucrat copy assignement operator called. " << std::endl;
    }
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor called. " << std::endl;
}

std::string Bureaucrat::getName() const
{
    return (this->_name);
}

int Bureaucrat::getGrade() const
{
    return (this->_grade);
}
std::ostream & operator<<(std::ostream & o, const Bureaucrat & b)
{
    o << b.getName() << ", bureaucrate grade " << b.getGrade() << ".";
    return (o);
}
