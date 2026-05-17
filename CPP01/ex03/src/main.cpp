/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 11:01:34 by jdelattr          #+#    #+#             */
/*   Updated: 2026/05/10 14:48:15 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    
    std::cout << std::endl;
    
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }

    std::cout << std::endl;

    {
    	Weapon	weapon = Weapon("weapon A");
		HumanA	Bill("Bill", weapon);
		HumanB	Joe("Joe");
		Bill.attack();
		Joe.attack();
		Joe.setWeapon(weapon);
		Bill.attack();
		Joe.attack();
		weapon.setType("weapon B");
		Bill.attack();
		Joe.attack();
        
        weapon = Weapon("weapon C");
        Bill.attack();
		Joe.attack();

        Weapon	newWeapon = Weapon("weapon A");
        Joe.setWeapon(newWeapon);
        Bill.attack();
		Joe.attack();
    }
    return 0;
}
