/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 13:07:24 by jdelattr          #+#    #+#             */
/*   Updated: 2026/05/30 18:58:21 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->FixedValue = 0;
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
    return (this->FixedValue);
}


void Fixed::setRawBits(int const raw)
{
    this->FixedValue = raw;
    std::cout << "setRawBits member function called" << std::endl;
    return ;
}



Fixed & Fixed::operator=(const Fixed & Fixed_)
{
  if (&Fixed_ != this) 
  {
        this->FixedValue = Fixed_.FixedValue;
        std::cout << "Copy assignment operator called" << std::endl;
  }
  return *this;
}