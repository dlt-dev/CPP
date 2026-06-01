/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 13:07:21 by jdelattr          #+#    #+#             */
/*   Updated: 2026/06/01 13:22:18 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <bitset>

class Fixed
{
    private:
        int fixedValue;
        static const int fractBitsNum = 8;
    

    public:
        Fixed();
        Fixed(const Fixed & num);
        
        ~Fixed();
        Fixed & operator=(const Fixed & Fixed_);


        int getRawBits( void ) const;
        void setRawBits( int const raw );
        
};

# endif
