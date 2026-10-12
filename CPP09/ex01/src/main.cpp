/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 17:09:44 by jdelattr          #+#    #+#             */
/*   Updated: 2026/08/27 16:58:47 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


#include <iostream>
#include <string>


int main(int ac, char**av)
{
	if (ac != 2)
	{
		std::cerr << "Wrong argument value : Try : [./RPN <an inverted Polish mathematical expression>]" << std::endl;
		return 1;
	}

	RPN rpn(av[1]);

	try
	{
		int result = rpn.calculate();
		std::cout << result << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return 1;
	}


	return 0;
}
