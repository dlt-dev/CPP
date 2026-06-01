/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 13:07:24 by jdelattr          #+#    #+#             */
/*   Updated: 2026/06/01 13:24:22 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fixedValue = 0;
    return ;
}

Fixed::Fixed(const Fixed & num)
{
    *this = num;
    std::cout << "Copy constructor called" << std::endl;
    return ;
}


Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

int Fixed::getRawBits(void) const
{
    std::cout << "setRawBits member function called" << std::endl;
    return (this->fixedValue);
}


void Fixed::setRawBits(int const raw)
{
    this->fixedValue = raw;
    std::cout << "setRawBits member function called" << std::endl;
    return ;
}



Fixed & Fixed::operator=(const Fixed & Fixed_)
{
  if (&Fixed_ != this) 
  {
        this->fixedValue = Fixed_.fixedValue;
        std::cout << "Copy assignment operator called" << std::endl;
  }
  return *this;
}