/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 11:02:46 by jdelattr          #+#    #+#             */
/*   Updated: 2026/05/10 14:31:28 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
	: name(name), weapon(weapon)
{
     return ;
}

HumanA::~HumanA(void)
{
    return ;
}

void HumanA::attack(void)
{
    std::cout   << name
                << " attacks with his "  
                << weapon.getType()
                << std::endl;
}
