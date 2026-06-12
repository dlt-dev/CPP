/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 17:21:42 by jdelattr          #+#    #+#             */
/*   Updated: 2026/06/12 12:44:18 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
  protected:

    std::string type;

  public:

    Animal();
    Animal(const Animal& other);
    Animal(const std::string& name);
    virtual ~Animal();
    Animal& operator=(const Animal& other);
    virtual void makeSound() const = 0;
    std::string getType() const;
};

#endif
