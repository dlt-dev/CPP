/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 18:52:09 by jdelattr          #+#    #+#             */
/*   Updated: 2026/05/09 15:18:19 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Zombie.hpp"
#include <stdlib.h> 

Zombie	*zombieHorde(int N, std::string name);

int main(int ac, char **av)
{
        int             N;
        std::string     name;
        Zombie          *horde;

        if (ac != 3)
        {
                std::cout << "Need number and name ." << std::endl;
                return (1);
        }       
        N = std::atoi(av[1]);
	if (N < 0)
	{
		std::cout << "Enter a valid positive value ." << std::endl;
		return (1);
	}
        if (N == 0)
                std::cout << "Zero zombies in the horde ." << std::endl;
        
        name = av[2];
        horde = zombieHorde(N, name);
        for (int i = 0; i < N; i++)
                horde[i].announce();
        
        //The delete [] operator deallocates memory 
        //for an array of objects created with new [].
        delete[] horde;
        return (0);
        
}
