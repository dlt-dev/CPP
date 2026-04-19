/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 15:18:30 by jdelattr          #+#    #+#             */
/*   Updated: 2026/04/19 17:09:47 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.hpp"

class  PhoneBook
{
	private:
		Contact	_contacts[8];
	
	public:
		PhoneBook();
		~PhoneBook();

		void	add();
		void	search();
};
