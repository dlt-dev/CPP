/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 16:58:09 by jdelattr          #+#    #+#             */
/*   Updated: 2026/08/27 13:06:17 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

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


class RPN
{
    private:

        std::string _polishEx;


    
    public:
    
        RPN();
		RPN(const RPN& other);
		RPN& operator=(const RPN& other);
		~RPN();

        RPN(const std::string& expression);
        
        int calculate() const;
        


        
};


#endif
