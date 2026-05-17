/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 11:13:35 by jdelattr          #+#    #+#             */
/*   Updated: 2026/05/10 13:26:00 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include <Weapon.hpp>

class HumanA
{
    private:
        std::string name;
        Weapon&     weapon;

    public:
        HumanA(std::string name, Weapon& weapon);
        ~HumanA(void);
        void    attack(void);
};

#endif
