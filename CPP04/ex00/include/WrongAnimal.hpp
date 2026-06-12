/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 19:06:17 by jdelattr          #+#    #+#             */
/*   Updated: 2026/06/11 16:25:14 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
  protected:

    std::string type;
    
  public:

    WrongAnimal();
    WrongAnimal(const std::string& name);
    WrongAnimal(const WrongAnimal& other);
    WrongAnimal& operator=(const WrongAnimal& other);
    
    ~WrongAnimal();
    
    void makeSound() const;
    std::string getType() const;
};

#endif