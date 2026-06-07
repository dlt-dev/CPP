/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 17:43:11 by jdelattr          #+#    #+#             */
/*   Updated: 2026/06/07 19:01:45 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat() : Animal("Cat")
{
  std::cout << "Default Cat constructor called. " << std::endl;
}


Cat::Cat(const Cat& other) : Animal(other)
{
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
    
    std::cout << "Default Cat desstructor called. " << std::endl;
}

void Cat :: makeSound() const
{
    std::cout << "**miaou**" << std::endl;
}
