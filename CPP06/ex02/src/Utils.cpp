/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 16:35:12 by jdelattr          #+#    #+#             */
/*   Updated: 2026/08/15 17:15:34 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <string>
#include <iomanip>
#include <stdint.h>

#include "Utils.hpp"



void identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown" << std::endl;
}

Base* generate(void)
{
	int randomType = std::rand() % 3;

	if (randomType == 0)
		return new A();
	else if (randomType == 1)
		return new B();
	else
		return new C();
}

void identify(Base& p)
{
	bool found = false;

	try
	{
		dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		found = true;
	}
	catch (...) // tout le reste
	{
	}
	if (found)
		return;

	try
	{
		dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		found = true;
	}
	catch (...)
	{
	}
	if (found)
		return;

	try
	{
		dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		found = true;
	}
	catch (...)
	{
	}
	if (!found)
		std::cout << "Unknown" << std::endl;
}
