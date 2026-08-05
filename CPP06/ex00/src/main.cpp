/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 13:26:41 by jdelattr          #+#    #+#             */
/*   Updated: 2026/08/05 19:12:04 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char** argv)
{
    // detect the type of literal as parameter
    // convert it from string to actual type
    // convert it explicitly to the three other data types

    if (argc != 2)
        return 1;

    ScalarConverter::convert(argv[1]);

    return 0;
    
}
