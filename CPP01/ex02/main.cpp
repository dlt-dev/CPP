/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 15:27:43 by jdelattr          #+#    #+#             */
/*   Updated: 2026/05/17 16:51:24 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	str;
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	str = "HI THIS IS BRAIN";

	std::cout	<< "The address of [str] is       : "
				<< "[" << &str << "]"
				<< std::endl;
				
	std::cout	<< "The address of [stringPTR] is : "
			<< "[" << stringPTR << "]"
				<< std::endl;
				
	std::cout	<< "The address of [stringREF] is : "
				<< "[" << &stringREF << "]"
				<< std::endl;
	
	std::cout << std::endl;

	std::cout	<< "[str] contains       : "
				<< "[" << str << "]"
				<< std::endl;
				
	std::cout	<< "[stringPTR] contains : "
				<< "[" << *stringPTR << "]"
				<< std::endl;
				
	std::cout	<< "[stringREF] contains : "
				<< "[" << stringREF << "]"
				<< std::endl;
				
	return (0);
}
