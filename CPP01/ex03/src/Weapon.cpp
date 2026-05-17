/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 11:13:25 by jdelattr          #+#    #+#             */
/*   Updated: 2026/05/10 14:31:17 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string type) : type(type)///
{
    return ;
}

Weapon::~Weapon(void)
{
    return ;
}

std::string Weapon::getType(void) const
{
    return (type);
}

void Weapon::setType(std::string type)
{
    std::cout << "Weapon name change for " 
            << this->type 
            << " to " 
            << type << std::endl;
            
    this->type = type;
}
