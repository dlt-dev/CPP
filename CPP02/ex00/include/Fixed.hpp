/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 13:07:21 by jdelattr          #+#    #+#             */
/*   Updated: 2026/05/30 18:58:20 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <bitset>

#define ANSI_BLACK		"\033[30m"
#define ANSI_BBLACK		"\033[90m"

#define ANSI_RED		"\033[31m"
#define ANSI_BRED		"\033[91m"

#define ANSI_YELLOW		"\033[33m"
#define ANSI_BYELLOW	"\033[93m"

#define ANSI_CYAN		"\033[36m"
#define ANSI_BCYAN		"\033[96m"

#define ANSI_PURPLE		"\033[35m"
#define ANSI_BPURPLE	"\033[95m"

#define ANSI_BOLD		"\033[1m"
#define ANSI_ITALIC		"\033[3m"
#define ANSI_RESET		"\033[0m"



class Fixed
{
    private:
        int FixedValue;
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