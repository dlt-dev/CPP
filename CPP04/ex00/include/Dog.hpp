/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 18:23:40 by jdelattr          #+#    #+#             */
/*   Updated: 2026/06/05 18:28:06 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
#include "Dog.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

class Dog : public Animal
{
  protected:

    
  public:

    Dog();
    Dog(const Dog& other);
    Dog& operator=(const Dog& other);
    ~Dog();

    void makeSound() const;

};

#endif

Dog :: Dog()
{
    
}

Dog :: ~Dog()
{
    
}

void Dog :: makeSound() const
{
    std::cout << "**WOUF**" << std::endl;
}
