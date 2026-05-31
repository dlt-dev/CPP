/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 13:05:37 by jdelattr          #+#    #+#             */
/*   Updated: 2026/05/31 22:29:00 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <bitset>
#include "Fixed.hpp"

int main( void )
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << b << std::endl;
    Fixed c( Fixed( 5.05f ) / Fixed( 2 ) );
    std::cout << c << std::endl;
    Fixed d( Fixed( 5.05f ) + Fixed( 2 ) );
    std::cout << d << std::endl;
    Fixed e( Fixed( 5.05f ) - Fixed( 2 ) );
    std::cout << e << std::endl;

    
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    
    std::cout << Fixed::max( a, b ) << std::endl;
    std::cout << Fixed::min( a, b ) << std::endl;
    
    return 0;
}
