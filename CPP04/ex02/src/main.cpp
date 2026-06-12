/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 17:20:37 by jdelattr          #+#    #+#             */
/*   Updated: 2026/06/12 12:56:11 by jdelattr         ###   ########.fr       */
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
    // //test 1
    
    // // const Animal* j = new Dog();
    // // const Animal* i = new Cat();

    // // delete j;
    // // delete i;

    // //test 2

    // // const int size = 10;
    // // Animal* animals[size];

    // // for (int i = 0; i < size; i++)
    // // {
    // //     if (i < size / 2)
    // //         animals[i] = new Dog();
    // //     else
    // //         animals[i] = new Cat();
    // // }

    // // for (int i = 0; i < size; i++)
    // //     delete animals[i];

    // //test 3 (brain)
 
    // // Dog *a = new Dog();
    // Cat *b = new Cat();
    
    // // a->makeSound();
    // // a->setIdea(1, "idea 1");
    
    // // std::cout << a->getIdea(1) << std::endl;

    // b->makeSound();
    // b->setIdea(100, "good idea");
    
    // std::cout << b->getIdea(100) << std::endl;
    
    
    // // delete a;
    // delete b;

    const Animal* meta = new Dog();
    //const Animal* meta = new Animal();
    
    std::cout << meta->getType() << std::endl;
    
    meta->makeSound();
    
    delete meta;
    
    return 0;
}

