/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 17:53:51 by jdelattr          #+#    #+#             */
/*   Updated: 2026/03/13 15:10:42 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"


void	add()//
{
	//irst name
	//last name
	//nickname
	//phone number
	//rkest secret

	//
	//si le conntact n'est pas complet -> exit + prompte
	//une fois all th efields -> enregistrer l econtact

}

void	search()
{

}

int	main(int ac, char **av)
{
	PhoneBook	book;
	
	if (ac == 1)
			return (0);

	std::string	arg = av[1];
	
	
	//Contact	;
	while (true)
	{
		if (!arg.compare("ADD")){
			std::cout << "ADD" << std::endl;
			//add();
		}
		else if (!arg.compare("SEARCH")){
			std::cout << "SEARCH" << std::endl;
			//search();
		}
		else if (!arg.compare("EXIT")){
			std::cout << "EXIT" << std::endl;
			break ;
		}
	}
	return (0);
	
}

/* 	while (true)
	{
		if (!arg.compare("ADD")){
			std::cout << "ADD" << std::endl;
			//add();
		}
		else if (!arg.compare("SEARCH")){
			std::cout << "SEARCH" << std::endl;
			//search();
		}
		else if (!arg.compare("EXIT")){
			std::cout << "EXIT" << std::endl;
			break ;
		}
	}
	return (0); */
	