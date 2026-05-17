/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 12:13:38 by jdelattr          #+#    #+#             */
/*   Updated: 2026/05/11 13:30:47 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <fstream>
# include <iostream>

# include "Harl.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "Error : "
            << std::endl
            << "Usage is : ./Harl_2.0 <level>" 
            << std::endl;
        return (1);
    }

    std::string level;
    Harl harl;
    
    level = av[1];
    harl.complain(level);

    return (0);
}
