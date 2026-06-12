/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 19:49:57 by jdelattr          #+#    #+#             */
/*   Updated: 2026/06/11 18:06:58 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
  std::cout << "Default Brain constructor called. " << std::endl;
}

Brain::Brain(const Brain& other)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
    std::cout << "Brain copy constructor called. " << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
    if (this != &other)
    {
        std::cout << "Brain copy assignment operator called " << std::endl;
        for (int i = 0; i < 100; i++)
            this->ideas[i] = other.ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Default Brain destructor called. " << std::endl;
}

void Brain::setIdea(int const index, const std::string &idea)
{
    if (index >= 100 || index < 0)
        std::cout << "There is no space for an idea here ... out of " << std::endl;
    else
    {
        std::cout << "Idea set at index : " << index << std::endl;
        std::cout << "This idea is : " << idea << std::endl;
        this->ideas[index] = idea;
    }
}

std::string Brain::getIdea(int const index) const
{
    if (index >= 100 || index < 0)
    {
        std::cout << "There is no idea here ... out of the brain" << std::endl;
        return (std::string());
    }
    if (this->ideas[index].empty())
        std::cout << "There is no idea here ... This place is empty" << std::endl;

    return (this->ideas[index]);
}
