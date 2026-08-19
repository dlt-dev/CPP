/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 17:58:18 by jdelattr          #+#    #+#             */
/*   Updated: 2026/08/18 13:28:06 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <vector>
#include <list>
#include <iostream>


int main()
{
    std::vector<int> l1;
    l1.push_back(45);
    l1.push_back(13);
    l1.push_back(13);
    l1.push_back(13);
    l1.push_back(0);
    
    std::cout << "SIZE" << std::endl;
    std::cout << l1.size() << std::endl;
    std::cout << std::endl;
    
    std::vector<int>::iterator it_begin;
    std::vector<int>::iterator it_end;

    it_begin = l1.begin();
    
    std::cout << "LIST" << std::endl;
    while(it_begin != l1.end())
    { 
        std::cout << *it_begin << std::endl;
        it_begin++; 
    }
    
    std::cout << std::endl;
    std::cout << "EASYFIND" << std::endl;

    std::vector<int>::iterator result = easyfind(l1, 0);
    std::cout << *result << std::endl;

    
}
