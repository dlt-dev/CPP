/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 17:38:54 by jdelattr          #+#    #+#             */
/*   Updated: 2026/08/16 18:13:20 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>
#include <exception>
#include <cctype>
#include <stdint.h>

#include <limits>
#include <cstdlib>

#include <cstddef>


template <typename T>
class Array
{

    public:

        Array();
        Array(unsigned int n);
        Array(const Array& other);
        Array& operator=(const Array& other);
        ~Array();

        T& operator[](unsigned int index);
        const T& operator[](unsigned int index) const;
        
        unsigned int size() const;
    
    private:

        T* _data;
        unsigned int _length;
};


#include "Array.tpp"


#endif