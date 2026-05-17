/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 12:13:38 by jdelattr          #+#    #+#             */
/*   Updated: 2026/05/17 16:53:52 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <fstream>
# include <iostream>

# include "Harl.hpp"

int	main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "Error : "
            << std::endl
            << "Usage is : ./Harl_2.0 <level>" 
            << std::endl;
        return (1);
    }
    
	Harl 		harl;
	std::string	level = av[1];
	std::string	levels[] =
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR",
		"UNKNOWN"
	};
	int			i = 0;

	while (i < 4 && level != levels[i])
		i++;
	switch (i)
	{
		case 0:
			harl.complain(levels[0]);
            /* fall through */
		case 1:
			harl.complain(levels[1]);
            /* fall through */
		case 2:
			harl.complain(levels[2]);
            /* fall through */
		case 3:
			harl.complain(levels[3]);
			break;
		default:
			harl.complain(levels[4]);
	}
	return (0);
}
