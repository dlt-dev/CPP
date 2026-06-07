/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 17:42:59 by jdelattr          #+#    #+#             */
/*   Updated: 2026/06/07 19:03:13 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog() : Animal("Dog")
{
  std::cout << "Default Dog constructor called. " << std::endl;
}


Dog::Dog(const Dog& other) : Animal(other)
{
  std::cout << "Dog copy constructor called. " << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        std::cout << "Dog copy assignment operator called " << std::endl;
    }
   
    return *this;
}

Dog::~Dog()
{
    
    std::cout << "Default Dog desstructor called. " << std::endl;
}

void Dog :: makeSound() const
{
    std::cout << "**WOUF**" << std::endl;
}
