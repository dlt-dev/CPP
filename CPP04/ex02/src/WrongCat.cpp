/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 19:13:56 by jdelattr          #+#    #+#             */
/*   Updated: 2026/06/12 12:17:31 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
  std::cout << "Default WrongCat constructor called. " << std::endl;
}


WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
  std::cout << "WrongCat copy constructor called. " << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    if (this != &other)
    {
        WrongAnimal::operator=(other);
        std::cout << "WrongCat copy assignment operator called " << std::endl;
    }
   
    return *this;
}

WrongCat::~WrongCat()
{
    
    std::cout << "Default WrongCat desstructor called. " << std::endl;
}

void WrongCat :: makeSound() const
{
    std::cout << "**miaou**" << std::endl;
}