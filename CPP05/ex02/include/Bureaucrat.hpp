/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 14:47:08 by jdelattr          #+#    #+#             */
/*   Updated: 2026/07/06 17:49:34 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class AForm;

class Bureaucrat
{
    private:

    const std::string _name;
    int _grade;
    
    public:
    
    class GradeTooHighException : public std::exception {
    public:
        const char* what() const throw()
        {
            return ("Grade too high");
        }
    };

    class GradeTooLowException : public std::exception {
    public:
        const char* what() const throw()
        {
           return ("Grade too low"); 
        }
    };

    Bureaucrat(const std::string name, int grade);
    Bureaucrat(const Bureaucrat& other);
    Bureaucrat& operator=(const Bureaucrat& other);
    ~Bureaucrat();

    std::string getName() const;
    int getGrade() const;
    
    void signForm(AForm& form) const;
    void executeForm(AForm const & form) const;

};

std::ostream & operator<<(std::ostream & o, const Bureaucrat & b);

#endif
