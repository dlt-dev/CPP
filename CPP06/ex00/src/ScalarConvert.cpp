/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 12:47:39 by jdelattr          #+#    #+#             */
/*   Updated: 2026/08/15 15:37:08 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <string>
#include <iomanip>

ScalarConverter::ScalarConverter() 
{
	
}

ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
	(void)other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
	(void)other;
	return *this;
}

ScalarConverter::~ScalarConverter()
{
	
}

ScalarConverter::Type ScalarConverter::detectType(const std::string& literal)
{
    
    if (literal == "nan" || literal == "+inf" || literal == "-inf")
	    return DOUBLE;
    
    if (literal == "nanf" || literal == "+inff" || literal == "-inff")
	    return FLOAT;
    
    if (literal.length() == 1 && !std::isdigit(literal[0]))
		  return CHAR;
      
    // check dot position
     
    size_t dotPosition = literal.find('.');
    bool hasDot;

    if (dotPosition == std::string::npos)
      hasDot = false;

    else
      hasDot = true;


    bool  endF;

    // check f 
    
    if (literal.empty())
      endF = false;

    else
    {
      size_t lastIndex = literal.size() - 1;
      char lastChar = literal[lastIndex];
      
      if (lastChar == 'f')
        endF = true;
      else
        endF = false;
    }

    
    if (hasDot)
    {
      if (endF)
        return FLOAT;

      else
        return DOUBLE;
    }

    size_t i = 0;

    if (!literal.empty() && (literal[0] == '-' || literal[0] == '+'))
      i = 1;
      
    if (i == literal.size())
      return INVALID;

    while (i < literal.size())
    {
      if (!std::isdigit(literal[i]))
        return INVALID;
      i++;
    }
    

    return INT;

}

void ScalarConverter::asDouble(double value)
{
	std::cout << "double: ";

	if (std::isnan(value))
		std::cout << "nan" << std::endl;
	else if (std::isinf(value))
	{
		if (value > 0)
			std::cout << "+inf" << std::endl;
		else
			std::cout << "-inf" << std::endl;
	}
	else
	{
		std::cout << std::fixed << std::setprecision(1) << value << std::endl;
	}
}

void ScalarConverter::asFloat(double value)
{
	std::cout << "float: ";

	if (std::isnan(value))
		std::cout << "nanf" << std::endl;
	else if (std::isinf(value))
	{
		if (value > 0)
			std::cout << "+inff" << std::endl;
		else
			std::cout << "-inff" << std::endl;
	}
	else
	{
		float f = static_cast<float>(value);
		std::cout << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	}
}

void ScalarConverter::asInt(double value)
{
	std::cout << "int: ";

	if (std::isnan(value) || std::isinf(value))
	{
		std::cout << "impossible" << std::endl;
	}
	else if (value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min())
	{
		std::cout << "impossible" << std::endl;
	}
	else
	{
		int i = static_cast<int>(value);
		std::cout << i << std::endl;
	}
}

void ScalarConverter::asChar(double value)
{
	std::cout << "char: ";

	if (std::isnan(value) || std::isinf(value))
	{
		std::cout << "impossible" << std::endl;
	}
	else if (value < 0 || value > 255) // ascii
	{
		std::cout << "impossible" << std::endl;
	}
	else
	{
		int i = static_cast<int>(value);
		if (!std::isprint(i))
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
	}
}

void ScalarConverter::convert(const std::string& literal)
{
  
	Type type = detectType(literal);
	double value;

	if (type == INVALID)
	{
		std::cout << "Error: invalid literal" << std::endl;
		return;
	}

	if (type == CHAR)
	{
		value = static_cast<double>(literal[0]);
	}

  
	else if (type == INT)//convert int
	{
		value = static_cast<double>(std::atoi(literal.c_str()));
	}

	else if (type == FLOAT)
	{
		if (literal == "nanf")
			value = std::numeric_limits<double>::quiet_NaN();
		else if (literal == "+inff")
			value = std::numeric_limits<double>::infinity();
		else if (literal == "-inff")
			value = -std::numeric_limits<double>::infinity();
		else
			value = static_cast<double>(std::strtof(literal.c_str(), NULL)); //strtof = convert float
	}

  
	else 
	{
		if (literal == "nan")
			value = std::numeric_limits<double>::quiet_NaN();
		else if (literal == "+inf")
			value = std::numeric_limits<double>::infinity();
		else if (literal == "-inf")
			value = -std::numeric_limits<double>::infinity();
		else
			value = std::strtod(literal.c_str(), NULL);
	}

	asChar(value);
	asInt(value);
	asFloat(value);
	asDouble(value);

}
