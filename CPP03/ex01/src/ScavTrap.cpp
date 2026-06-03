/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 15:12:08 by jdelattr          #+#    #+#             */
/*   Updated: 2026/06/03 16:32:06 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"


ScavTrap::ScavTrap(std::string name)
    : ClapTrap(name)
{
    std::cout << "ScavTrap " << Name << " constructor called" << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << Name << " destructor called" << std::endl;
}


void ScavTrap::attack(const std::string& target)
{
    if (this->hitPoints == 0)
    {
    std::cout << "ScavTrap " << Name << " can't attack because it has no hit points left!" << std::endl;
    return;
    }
    if (this->energyPoints == 0)
    {
    std::cout << "ScavTrap " << Name << " can't attack because it has no energy points left!" << std::endl;
    return;
    }

    std::cout << "ScavTrap " 
            << Name
            << " attacks "
            << target
            << ", causing "
            << this->attackDamage
            << " points of damage!"
            << std::endl;

    this->energyPoints = this->energyPoints - 1;
}


void ScavTrap::guardGate()
{
    
    std::cout << "ScavTrap " << Name << " is now in Gate keeper mode !!!" << std::endl;
    
}

