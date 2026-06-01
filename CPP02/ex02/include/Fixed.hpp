/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 13:07:21 by jdelattr          #+#    #+#             */
/*   Updated: 2026/06/01 13:38:41 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <bitset>
#include <cmath>

class Fixed
{
    private:
        int fixedValue;
        static const int fractBitsNum = 8;
    

    public:
        Fixed();
        Fixed(const int iValue); // const integer
        Fixed(const float fValue); // const float
        Fixed(const Fixed & num);
        
        ~Fixed();
        Fixed & operator=(const Fixed & Fixed_);
        bool operator>(const Fixed & Fixed_) const;
        bool operator<(const Fixed & Fixed_) const;
        bool operator>=(const Fixed & Fixed_) const;
        bool operator<=(const Fixed & Fixed_) const;
        bool operator==(const Fixed & Fixed_) const;
        bool operator!=(const Fixed & Fixed_) const;

        Fixed operator+(const Fixed & Fixed_) const;
        Fixed operator-(const Fixed & Fixed_) const;
        Fixed operator*(const Fixed & Fixed_) const;
        Fixed operator/(const Fixed & Fixed_) const;

        Fixed & operator++();
        Fixed operator++(int);
        Fixed & operator--();
        Fixed operator--(int);
        
        static Fixed & min(Fixed & a, Fixed & b);
        static const Fixed & min(const Fixed & a, const Fixed & b);
        static Fixed & max(Fixed & a, Fixed & b);
        static const Fixed & max(const Fixed & a, const Fixed & b);
        
        int getRawBits( void ) const;
        void setRawBits( int const raw ); 
        
        float toFloat( void ) const;//
        int toInt( void ) const;//
    };

std::ostream & operator<<(std::ostream & o, const Fixed & Fixed_);

# endif
