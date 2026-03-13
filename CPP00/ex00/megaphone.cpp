/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 14:11:27 by jdelattr          #+#    #+#             */
/*   Updated: 2026/03/04 17:10:01 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	strToUpper(std::string & str)
{
	for (int i = 0; str[i]; i++) {
		str[i] = std::toupper(str[i]);
	}
}

int	main(int ac, char** av)
{	
	if (ac == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}

	std::string	str;

	for (int i = 1; i < ac; i++) {
		str += av[i];
	}

	strToUpper(str);

	std::cout << str << std::endl;
}
