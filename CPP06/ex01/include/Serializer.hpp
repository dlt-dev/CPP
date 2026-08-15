/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 12:47:36 by jdelattr          #+#    #+#             */
/*   Updated: 2026/08/04 14:24:44 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <string>
#include <exception>
#include <cctype>

#include <stdint.h>

#include <iostream>
#include <cmath>
#include <limits>
#include <cstdlib>

struct Data
{
    int id;
    std::string name;
};

class Serializer
{
    private:
    
    Serializer();//car non istanciable
    Serializer(const Serializer& other);//
    Serializer& operator=(const Serializer& other);//
    ~Serializer();//
    
    public:
    
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
    
};

#endif
