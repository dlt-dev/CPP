/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 18:18:59 by jdelattr          #+#    #+#             */
/*   Updated: 2026/06/05 18:28:34 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

class Cat : public Animal
{
  protected:

    
  public:

    Cat();
    Cat(const Cat& other);
    Cat& operator=(const Cat& other);
    ~Cat();

    void makeSound() const;

};

#endif

Cat :: Cat()
{
    
}

Cat :: ~Cat()
{
    
}

void Cat :: makeSound() const
{
    std::cout << "**miaou**" << std::endl;
}
