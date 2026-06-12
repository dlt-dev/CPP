/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 18:23:40 by jdelattr          #+#    #+#             */
/*   Updated: 2026/06/11 13:06:39 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
#include "Dog.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
  
  private:

  Brain *_brain;

  public:

    Dog();
    Dog(const Dog& other);
    Dog& operator=(const Dog& other);
    ~Dog();

    void makeSound() const;
    void setIdea(int const index, const std::string &idea);
    std::string getIdea(int const index) const;

};

#endif
