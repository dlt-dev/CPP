/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 15:18:30 by jdelattr          #+#    #+#             */
/*   Updated: 2026/04/25 12:08:31 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.hpp"

class  PhoneBook
{
	private:
		Contact				_contacts[8];
		int					_index;
		int					_count;
	
	public:
		PhoneBook();
		~PhoneBook();

		void	add();
		void	search();
};
