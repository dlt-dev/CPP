/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 16:58:09 by jdelattr          #+#    #+#             */
/*   Updated: 2026/08/16 17:05:39 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>
#include <exception>
#include <cctype>

#include <stdint.h>

#include <iostream>
#include <cmath>
#include <limits>
#include <cstdlib>

# include <cstddef>


template <typename T, typename F>
void iter(T* array, const size_t lenght, F function)
{
    for (size_t i = 0; i < lenght; i++)
    {
        function(array[i]);
    }
    
}



#endif
