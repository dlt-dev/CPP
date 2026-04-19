/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 17:53:51 by jdelattr          #+#    #+#             */
/*   Updated: 2026/04/19 17:29:18 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

#include "PhoneBook.hpp"

typedef enum e_cmd
{
	CMD_EXIT, // 0
	CMD_ADD, // 1
	CMD_SEARCH, // 2
}	t_cmd;

static t_cmd getCmd(void)
{
	std::string input;
	int attemps = 0;
	while (attemps < 3)
	{
		std::cout << "Enter your instruction - ADD | SEARCH | EXIT : ";
		std::getline(std::cin, input);
		
		if (input == "add" || input == "ADD")
			return (CMD_ADD);
		else if (input == "search" || input == "SEARCH")
			return (CMD_SEARCH);
		else if (input == "exit" || input == "EXIT")
		{
			std::cout << "Exiting the program." << std::endl;
			std::exit(EXIT_SUCCESS);
		}
		else
		{
			std::cout << "Invalid command. Please enter ADD, SEARCH, or EXIT." << std::endl;
			attemps++;
		}
	}
	std::cout << "Maximum attempts reached. Exiting the program." << std::endl;
	std::exit(EXIT_FAILURE);
}


int main(void)
{
	PhoneBook	phoneBook;
	t_cmd		cmd;


	std::cout << "Welcome !" << std::endl;
	while (true) 
	{
		cmd = getCmd();
		if (cmd == CMD_ADD)
			phoneBook.add();
		else if (cmd == CMD_SEARCH)
			phoneBook.search();
	}
	return 0;
}
