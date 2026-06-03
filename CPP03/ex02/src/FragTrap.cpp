/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 16:43:07 by jdelattr          #+#    #+#             */
/*   Updated: 2026/06/03 16:50:12 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"


FragTrap::FragTrap(std::string name)
    : ClapTrap(name)
{
    std::cout << "FragTrap " << Name << " constructor called" << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << Name << " destructor called" << std::endl;
}


void FragTrap::attack(const std::string& target)
{
    if (this->hitPoints == 0)
    {
    std::cout << "FragTrap " << Name << " can't attack because it has no hit points left!" << std::endl;
    return;
    }
    if (this->energyPoints == 0)
    {
    std::cout << "FragTrap " << Name << " can't attack because it has no energy points left!" << std::endl;
    return;
    }

    std::cout << "FragTrap " 
            << Name
            << " attacks "
            << target
            << ", causing "
            << this->attackDamage
            << " points of damage!"
            << std::endl;

    this->energyPoints = this->energyPoints - 1;
}


void FragTrap::highFivesGuys(void)
{
    
    std::cout << "FragTrap " << Name << " requests a high five! " << std::endl;
    
}
