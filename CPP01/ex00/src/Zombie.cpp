/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 18:52:25 by jdelattr          #+#    #+#             */
/*   Updated: 2026/05/08 19:26:25 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name)
{
	//std::cout << " [zombie] destructor called for " << name;
}

Zombie::~Zombie(void)
{
	//std::cout << " [zombie] destructor called for " << name;
}

void	Zombie::announce(void) const
{
	std::cout	<< name
				<< ": BraiiiiiiinnnzzzZ..."
				<< std::endl;
}
