/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 18:52:09 by jdelattr          #+#    #+#             */
/*   Updated: 2026/05/09 12:08:33 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Zombie.hpp"

int main(void)
{
        Zombie *zombie;
        
        //heap
        zombie = newZombie("Victor");
        zombie->announce();
        delete zombie;

        //stack
        randomChump("Louis");
}
