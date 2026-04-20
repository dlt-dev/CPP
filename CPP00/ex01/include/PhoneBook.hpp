/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 15:18:30 by jdelattr          #+#    #+#             */
/*   Updated: 2026/04/20 20:21:14 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.hpp"

class  PhoneBook
{
	private:
		static const int	MAX_CONTACTS = 8;
		Contact	_contacts[MAX_CONTACTS];
		int		_index;
		int		_count;
	
	public:
		PhoneBook();
		~PhoneBook();

		void	add();
		void	search();
};
