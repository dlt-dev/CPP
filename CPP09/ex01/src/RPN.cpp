/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 19:02:51 by jdelattr          #+#    #+#             */
/*   Updated: 2026/08/19 16:49:31 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <algorithm>
#include <climits> 
#include <stack>
#include <sstream>

RPN::RPN()
{

}

RPN::RPN(const RPN& other) : _polishEx(other._polishEx)
{

}

RPN& RPN::operator=(const RPN& other) 
{
	if (this == &other)
		return *this;

	_polishEx = other._polishEx;

	return *this;
}

RPN::~RPN()
{

}

RPN::RPN(const std::string& expression)
{
	this->_polishEx = expression;
}

static bool isNumber(const std::string& token)
{

	if (token.length() == 1 && std::isdigit(static_cast<unsigned char>(token[0])))
		return true;
	return false;

}

static int opHandling(const std::string& token, int a, int b)
{

	if (token == "+")
		return a + b;

	if (token == "-")
		return a - b;

	if (token == "*")
		return a * b;

	if (token == "/")
	{
		if (b == 0)
		{
			throw std::runtime_error("Error");

		}
		return a / b;
	}
	throw std::runtime_error("Error");

}


int RPN::calculate() const
{

	std::stack<int> findResult;

	std::istringstream iss(this->_polishEx);
	std::string token;
	int op;

	int valOne;
	int valTwo;

	while (iss >> token)
	{
		if (isNumber(token))
			findResult.push(std::atoi(token.c_str()));

		else if (token == "+" || token == "-" || token == "*" || token == "/")
		{
			//op = opHandling(token);

			if (findResult.size() < 2)
				throw std::runtime_error("Error");
			valTwo = findResult.top();
			findResult.pop();
			valOne = findResult.top();
			findResult.pop();
			op = opHandling(token, valOne, valTwo);
			findResult.push(op); 


		}
		else
		{
			throw std::runtime_error("Error");
		}
	}

	if (findResult.size() == 1) 
		return findResult.top();


	throw std::runtime_error("Error");
}
