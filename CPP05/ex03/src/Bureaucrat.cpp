/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 14:47:01 by jdelattr          #+#    #+#             */
/*   Updated: 2026/07/06 17:47:35 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

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

void Bureaucrat::signForm(AForm& form) const
{
    try
    {
        form.beSigned(*this);
        std::cout << this->getName() << " signed " << form.getName() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << this->getName() << " couldn\'t sign " << form.getName()
                  << " because " << e.what() << "." << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const & form) const
{
    try
    {
        form.execute(*this);
        std::cout << this->getName() << " executed " << form.getName() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << this->getName() << " couldn\'t execute " << form.getName()
                  << " because " << e.what() << "." << std::endl;
    }
}

