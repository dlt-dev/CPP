/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 15:19:10 by jdelattr          #+#    #+#             */
/*   Updated: 2026/06/01 17:25:06 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
  : Name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
  std::cout << "ClapTrap " << Name << " constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
  std::cout << "ClapTrap " << Name << " destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
  if (this->hitPoints == 0)
  {
    std::cout << "ClapTrap " << Name << " can't attack because it has no hit points left!" << std::endl;
    return;
  }
  if (this->energyPoints == 0)
  {
    std::cout << "ClapTrap " << Name << " can't attack because it has no energy points left!" << std::endl;
    return;
  }

  std::cout << "ClapTrap " 
            << Name
            << " attacks "
            << target
            << ", causing "
            << this->attackDamage
            << " points of damage!"
            << std::endl;

  this->energyPoints = this->energyPoints - 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
  if (this->hitPoints == 0)
  {
    std::cout << "ClapTrap " << Name << " is already out of hit points!" << std::endl;
    return;
  }

  std::cout << "ClapTrap "
            << this->Name
            << " takes "
            << amount
            << " points of damage!"
            << std::endl;

  if (amount >= this->hitPoints)
    this->hitPoints = 0;
  else
    this->hitPoints = this->hitPoints - amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
  if (this->hitPoints == 0)
  {
    std::cout << "ClapTrap " << Name << " can't be repaired because it has no hit points left!" << std::endl;
    return;
  }
  if (this->energyPoints == 0)
  {
    std::cout << "ClapTrap " << Name << " can't be repaired because it has no energy points left!" << std::endl;
    return;
  }

  std::cout << "ClapTrap " 
        << Name
        << " regains "
        << amount
        << " hit points!"
        << std::endl;

  this->hitPoints = this->hitPoints + amount;
  this->energyPoints = this->energyPoints - 1;
}
