/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 16:58:09 by jdelattr          #+#    #+#             */
/*   Updated: 2026/08/19 16:49:44 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <string>
#include <exception>
#include <cctype>

#include <stdint.h>

#include <iostream>
#include <cmath>
#include <limits>
#include <cstdlib>
#include <vector>
# include <cstddef>


class Span 
{

    public:
        Span(unsigned int n);
        Span(const Span &other);
        Span &operator=(const Span &other);
        ~Span();
        
        int shortestSpan() const;
        int longestSpan()const;
        void addNumber(int value);

        template <typename inputIt> // ajout oar blocs
        void addRange(inputIt first, inputIt last)
        {
            unsigned int count = 0;
            for (inputIt it = first; it != last; it++) // compter taille
                count++;

            if (_numbers.size() + count > _maxS) // verif taille 
                throw std::length_error("Ho no, you have not enought space in your span ....");

            for (inputIt it = first; it != last; it++) // add range
                _numbers.push_back(*it);            
        }
        
    private:
        Span();
        unsigned int _maxS;
        std::vector<int> _numbers;
        
};


#endif
