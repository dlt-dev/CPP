/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 18:52:25 by jdelattr          #+#    #+#             */
/*   Updated: 2026/05/09 15:21:47 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie::Zombie(void)
{
	//no name
}

Zombie::Zombie(std::string name) : name(name)
{
	//std::cout << "constructor called for " << name;
}

Zombie::~Zombie(void)
{
	//std::cout << "destructor called for " << name;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}

void	Zombie::announce(void) const
{
	std::cout	<< name
				<< ": BraiiiiiiinnnzzzZ..."
				<< std::endl;
}
