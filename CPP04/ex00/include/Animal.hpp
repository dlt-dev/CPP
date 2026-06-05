/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 17:21:42 by jdelattr          #+#    #+#             */
/*   Updated: 2026/06/05 18:31:37 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
  protected:
    //std::string Name;
    std::string type;
    
  public:

    Animal(std::string name);
    ~Animal();

};

#endif

Animal(std::string name)
{
    
}

~Animal()
{
    
}

void Animal::makeSound() const
{
    std::cout << "*animal sound*" << std::endl;
}
