/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 17:19:46 by jdelattr          #+#    #+#             */
/*   Updated: 2026/06/19 17:14:54 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"

Animal::Animal()
{
  this->type = "default";
  std::cout << "Default animal constructor called. " << std::endl;
}

Animal::Animal(const std::string& name)
{
   this->type = name;
   std::cout << "Animal constructor called. " << std::endl;
}
Animal::Animal(const Animal& other)
{   
  this->type = other.type;
  std::cout << "Animal copy constructor called. " << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
    if (this != &other)
    {
        this->type = other.type;
        std::cout << "Animal copy assignment operator called " << std::endl;
    }
    return *this;
}

Animal::~Animal()
{
    std::cout << "Default animal destructor called. " << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "*animal sound*" << std::endl;
}

std::string Animal::getType() const
{
    std::cout << "I am a ";
    return type;
}
