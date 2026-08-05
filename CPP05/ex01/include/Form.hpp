/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 15:44:49 by jdelattr          #+#    #+#             */
/*   Updated: 2026/07/06 17:05:37 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat;

class Form
{
    private:
    
    const std::string _name;
    bool _signed;
    const int _gradeToSign;
    const int _gradeToExecute;
    

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

    Form(const std::string name, int gradeToSign, int gradeToExecute);
    Form(const Form& other);
    Form& operator=(const Form& other);
    ~Form();
    
    std::string getName() const;
    bool getSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;

    void beSigned(const Bureaucrat& bureaucrat);
    



    
};

std::ostream & operator<<(std::ostream & o, const Form & b);

#endif
