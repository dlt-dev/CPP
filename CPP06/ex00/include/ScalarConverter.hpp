/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 12:47:36 by jdelattr          #+#    #+#             */
/*   Updated: 2026/08/04 14:24:44 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <exception>
#include <cctype>


#include <iostream>
#include <cmath>
#include <limits>
#include <cstdlib>

class ScalarConverter
{
    private:
    
    ScalarConverter();//
    ScalarConverter(const ScalarConverter& other);//
    ScalarConverter& operator=(const ScalarConverter& other);//
    ~ScalarConverter();//

    enum Type
    {
        CHAR, 
        INT,
        FLOAT,
        DOUBLE,
        INVALID
    };

    static Type detectType(const std::string& literal);
    static void asChar(double value);
    static void asInt(double value);
    static void asFloat(double value);
    static void asDouble(double value);
    
    public:
    
    static void convert(const std::string& literal);
    
};

#endif
