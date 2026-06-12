/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 17:43:11 by jdelattr          #+#    #+#             */
/*   Updated: 2026/06/12 12:43:28 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), _brain(new Brain)
{
    //this->_brain = new Brain;
    std::cout << "Default Cat constructor called. " << std::endl;
}


Cat::Cat(const Cat& other) : Animal(other), _brain(new Brain)
{
    //this->_brain = new Brain;
    std::cout << "Cat copy constructor called. " << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        std::cout << "Cat copy assignment operator called " << std::endl;
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << "Default Cat destructor called. " << std::endl;
    delete this->_brain;
    
}

void Cat :: makeSound() const
{
    std::cout << "**miaou**" << std::endl;
}

void Cat::setIdea(int const index, const std::string &idea)
{
    this->_brain->setIdea(index, idea);
}

std::string Cat::getIdea(int const index) const
{
    return (this->_brain->getIdea(index));
}
