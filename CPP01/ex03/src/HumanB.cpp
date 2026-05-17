/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 11:13:21 by jdelattr          #+#    #+#             */
/*   Updated: 2026/05/10 14:34:35 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name)
	: name(name), weapon(NULL)
{
    return ;
}

HumanB::~HumanB(void)
{
    return ;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}

void    HumanB::attack(void)
{
    if (weapon)
    {
            std::cout   << name
                << " attacks with his "  
                << weapon->getType()
                << std::endl;
    }
    else
    {
            std::cout   << name
                << " fails because he is unarmed "  
                << std::endl;
    }
}
