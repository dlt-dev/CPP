/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 14:11:27 by jdelattr          #+#    #+#             */
/*   Updated: 2026/04/20 20:07:22 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#define NEWLINE '\n'
using namespace std; 


void	strToUpper(string & str)
{
	for (int i = 0; str[i]; i++) {
		str[i] = toupper(str[i]);
	}
}

int	main(int ac, char** av)
{	
	if (ac == 1) {
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << NEWLINE;
		return 0;
	}

	string	str;

	for (int i = 1; i < ac; i++) {
		str += av[i];
	}
	strToUpper(str);
	cout << str << NEWLINE;
}
