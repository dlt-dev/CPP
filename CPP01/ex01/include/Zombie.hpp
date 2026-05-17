/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 19:00:31 by jdelattr          #+#    #+#             */
/*   Updated: 2026/05/09 15:22:00 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
#include <iostream>

class Zombie
{
    private:
        std::string name;

    public:
        Zombie(void);
        Zombie(std::string name);
        ~Zombie();

        void setName(std::string name);
        void announce() const;
};

#endif
