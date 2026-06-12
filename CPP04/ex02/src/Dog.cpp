/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 17:42:59 by jdelattr          #+#    #+#             */
/*   Updated: 2026/06/12 12:43:43 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), _brain(new Brain)
{
  std::cout << "Default Dog constructor called. " << std::endl;
}


Dog::Dog(const Dog& other) : Animal(other), _brain(new Brain)
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
    delete this->_brain;
}

void Dog :: makeSound() const
{
    std::cout << "**WOUF**" << std::endl;
}

void Dog::setIdea(int const index, const std::string &idea)
{
    this->_brain->setIdea(index, idea);
}

std::string Dog::getIdea(int const index) const
{
    
    return (this->_brain->getIdea(index));
}
