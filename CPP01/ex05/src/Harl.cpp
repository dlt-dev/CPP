/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 12:13:35 by jdelattr          #+#    #+#             */
/*   Updated: 2026/05/11 13:59:11 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Harl.hpp"

Harl::Harl()
{
    return ;
}

Harl::~Harl()
{
    return ;
}

void  Harl::debug(void)
{
    std::cout << ANSI_BPURPLE
                << "I love having extra bacon for my"
                << " 7XL-double-cheese-triple-pickle-specialketchup burger. "
                << "I really do!"
                << ANSI_RESET
                << std::endl;
}

void    Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. "
                << "You didn't put enough bacon in my burger! "
                << "If you did, I wouldn't be asking for more!"
                << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. "
                << "I've been coming for years, "
                << "whereas you started working here just last month."
                << std::endl;
}

void    Harl::error(void)
{
    std::cout << "This is unacceptable! "
                << "I want to speak to the manager now."
                << std::endl;
}


void	Harl::complain(std::string level)
{
	t_HarlLevel levels[] =
	{
		{"DEBUG", &Harl::debug},
		{"INFO", &Harl::info},
		{"WARNING", &Harl::warning},
		{"ERROR", &Harl::error},
	};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i].name == level)
		{
			(this->*levels[i].func)();
			return ;
		}
	}
}
