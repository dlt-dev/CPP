/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 13:07:24 by jdelattr          #+#    #+#             */
/*   Updated: 2026/05/31 22:28:16 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(const int iValue)// const integer
{
    std::cout << "Int constructor called" << std::endl;
    this->FixedValue = iValue * 256;
    return ;
}

Fixed::Fixed(const float fValue)// const float
{
    std::cout << "Float constructor called" << std::endl;
    this->FixedValue = roundf(fValue * 256);
    return ;
}

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

float Fixed::toFloat(void) const
{
    float fValue;
    
    fValue = (float)this->FixedValue / 256;

    return (fValue);
    
}

int Fixed::toInt(void) const
{
    int iValue;
    
    iValue = this->FixedValue / 256;
    
    return (iValue);
}

std::ostream & operator<<(std::ostream & o, const Fixed & Fixed_)
{
    o << Fixed_.toFloat();
    return (o);
}

Fixed & Fixed::operator++()
{
    this->FixedValue = this->FixedValue + 1;  
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    operator++();
    return (tmp); 
}

Fixed & Fixed::operator--()
{
    this->FixedValue = this->FixedValue - 1;  
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    operator--();
    return (tmp); 
}

Fixed Fixed::operator+(const Fixed & Fixed_) const
{
    Fixed result;
    
    result.FixedValue = this->FixedValue + Fixed_.FixedValue;

    return (result); 
}

Fixed Fixed::operator-(const Fixed & Fixed_) const
{
    Fixed result;
    
    result.FixedValue = this->FixedValue - Fixed_.FixedValue;

    return (result); 
}

Fixed Fixed::operator*(const Fixed & Fixed_) const
{
    Fixed result;
    
    result.FixedValue = this->FixedValue * Fixed_.FixedValue;
    result.FixedValue = result.FixedValue / 256;
    
    return (result); 
}

Fixed Fixed::operator/(const Fixed & Fixed_) const
{
    Fixed result;
    
    result.FixedValue = (this->FixedValue * 256)/ Fixed_.FixedValue;
    result.FixedValue =  result.FixedValue;
    
    return (result); 
}

bool Fixed::operator>(const Fixed & Fixed_) const
{
    if (this->FixedValue > Fixed_.FixedValue)
        return (true);

    return
        (false);
}

bool Fixed::operator<(const Fixed & Fixed_) const
{
    if (this->FixedValue < Fixed_.FixedValue)
        return (true);

    return
        (false);
}


bool Fixed::operator>=(const Fixed & Fixed_) const
{
    if (this->FixedValue >= Fixed_.FixedValue)
        return (true);

    return
        (false);
}

bool Fixed::operator<=(const Fixed & Fixed_) const
{
    if (this->FixedValue <= Fixed_.FixedValue)
        return (true);

    return
        (false);
}

bool Fixed::operator==(const Fixed & Fixed_) const
{
    if (this->FixedValue == Fixed_.FixedValue)
        return (true);

    return
        (false);
}

bool Fixed::operator!=(const Fixed & Fixed_) const
{
    if (this->FixedValue == Fixed_.FixedValue)
        return (true);

    return
        (false);
}

Fixed & Fixed::min(Fixed & a, Fixed & b)
{
    if (a < b)
        return (a);
    return (b);
}

const Fixed & Fixed::min(const Fixed & a, const Fixed & b)
{
    if (a < b)
        return (a);
    return (b);
}

Fixed & Fixed::max(Fixed & a, Fixed & b)
{
    if (a > b)
        return (a);
    return (b);
}

const Fixed & Fixed::max(const Fixed & a, const Fixed & b)
{
    if (a > b)
        return (a);
    return (b);
}
