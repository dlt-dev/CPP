/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 18:18:59 by jdelattr          #+#    #+#             */
/*   Updated: 2026/06/12 12:44:29 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
  private:

  Brain *_brain;

  public:

    Cat();
    Cat(const Cat& other);
    Cat& operator=(const Cat& other);
    ~Cat();

    void makeSound() const;
    void setIdea(int const index, const std::string &idea);
    std::string getIdea(int const index) const;

};

#endif


