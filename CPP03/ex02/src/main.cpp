/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 15:19:07 by jdelattr          #+#    #+#             */
/*   Updated: 2026/06/03 17:01:28 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap a("victor");
    ClapTrap b("leo");
    ClapTrap c("lili");

    ScavTrap d("zoe");

    d.attack("le chat");
    d.beRepaired(8);
    d.takeDamage(110);
    d.attack("le chat");

    d.guardGate();
    d.guardGate();

    FragTrap e("tom");
    
    e.highFivesGuys();
    //e.attack("zoe");
    //e.beRepaired(10);

    for (int i = 0; i < 105; ++i)
        e.attack("le chat");
    
    //for (int i = 0; i < 130; ++i)
    //    d.attack("le chat");

    a.attack("leo");
    b.takeDamage(3);
    b.beRepaired(2);
    b.attack("lili");

    for (int i = 0; i < 12; ++i)
        a.attack("leon");

    a.beRepaired(5);
    b.beRepaired(100);

    return (0);
}

