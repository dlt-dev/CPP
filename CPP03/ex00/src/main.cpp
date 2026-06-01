/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 15:19:07 by jdelattr          #+#    #+#             */
/*   Updated: 2026/06/01 17:20:29 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("victor");
    ClapTrap b("leo");
    ClapTrap c("lili");

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
