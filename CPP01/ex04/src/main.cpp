/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 14:52:40 by jdelattr          #+#    #+#             */
/*   Updated: 2026/05/11 13:45:30 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>
#include <string>
#include <iostream>
#include <fstream>
#include "Replace.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Error : "
		 			<< std::endl
					<< "Usage is : ./Sed_is_for_losers <filename> <s1> <s2>" 
					<< std::endl;
		return (1);
	}

	std::string filename = argv[1];
	std::string s1       = argv[2];
	std::string s2       = argv[3];

	if (s1.empty())
	{
		std::cerr << "Error : "
					<< std::endl
					<< "s1 cannot be empty" 
					<< std::endl;
		return (1);
	}

	newFile(filename, s1, s2);
	
	return (0);
}
