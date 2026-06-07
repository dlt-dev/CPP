/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 17:20:37 by jdelattr          #+#    #+#             */
/*   Updated: 2026/06/07 19:50:34 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    
    std::cout << meta->getType() << std::endl;
    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;

    std::cout << "Cat say" << std::endl;
    i->makeSound();
    std::cout << "Dog say" << std::endl;
    j->makeSound();
    std::cout << "Animal say" << std::endl;
    meta->makeSound();

    
    delete meta;
    delete j;
    delete i;
    
    std::cout << "\n" << std::endl;   
    std::cout << "test Wrong Animal" << std::endl;
    const WrongAnimal* a = new WrongAnimal();
    const WrongAnimal* b = new WrongCat();

    std::cout << a->getType() << std::endl;
    std::cout << b->getType() << std::endl;

    std::cout << "WrongCat say" << std::endl;
    b->makeSound();

    std::cout << "WrongAnimal say" << std::endl;
    a->makeSound();

    delete a;
    delete b;
    
    
    return 0;
}

