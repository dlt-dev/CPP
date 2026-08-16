/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 17:58:13 by jdelattr          #+#    #+#             */
/*   Updated: 2026/08/16 16:51:16 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <string>
#include <exception>
#include <cctype>

#include <stdint.h>

#include <iostream>
#include <cmath>
#include <limits>
#include <cstdlib>

template <typename T>
void swap(T &a, T &b)
{
    T tmp;
    
    tmp = a;
    a = b;
    b = tmp;
    
}

template <typename T>
const T& min(const T &a, const T &b)
{

    if (a < b)
        return a;
    
    else
        return b;
    
}

template <typename T>
const T& max(const T &a, const T &b)
{
    

    if (a > b)
        return a;
    
    else
        return b;
    
}

#endif
