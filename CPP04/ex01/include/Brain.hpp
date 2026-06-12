/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 19:49:51 by jdelattr          #+#    #+#             */
/*   Updated: 2026/06/11 13:10:16 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
  private:

    std::string ideas[100];
    
    
  public:

    Brain();
    Brain(const Brain& other);
    ~Brain();
    
    Brain& operator=(const Brain& other);

    void setIdea(int const index, const std::string &idea);
    std::string getIdea(int const index) const;
    
};

#endif
