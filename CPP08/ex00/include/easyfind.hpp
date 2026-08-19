/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 17:58:13 by jdelattr          #+#    #+#             */
/*   Updated: 2026/08/18 13:27:33 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

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
#include <list>
#include <algorithm>   // std::find
#include <stdexcept>   // std::runtime_error




template<typename T>
typename T::iterator easyfind(T& container, int value)
{
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    
    if(it == container.end())
        throw std::runtime_error("Value not found");
        
    return it;
    
}
// ici it est une iterateur, un objet qui pointe vers l'emplacement dans le conteneur ou ce trouve cette valeur
// juste une position dan sle conteneur


#endif
