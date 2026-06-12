/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 19:13:53 by jdelattr          #+#    #+#             */
/*   Updated: 2026/06/11 17:03:25 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
  this->type = "WrongDefault";
  std::cout << "Default WrongAnimal constructor called. " << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& name)
{
   this->type = name;
   std::cout << "WrongAnimal constructor called. " << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
  this->type = other.type;
  std::cout << "WrongAnimal copy constructor called. " << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    if (this != &other)
    {
        this->type = other.type;
        std::cout << "WrongAnimal copy assignment operator called " << std::endl;
    }
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Default WrongAnimal desstructor called. " << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "*WrongAnimal sound*" << std::endl;
}

std::string WrongAnimal::getType() const
{
    std::cout << "I am a ";
    return type;
}
