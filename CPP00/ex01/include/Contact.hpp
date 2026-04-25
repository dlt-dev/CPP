/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 15:39:34 by jdelattr          #+#    #+#             */
/*   Updated: 2026/04/25 11:22:59 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

	enum e_field
	{
		FIELD_FIRST_NAME = 0,
		FIELD_LAST_NAME,
		FIELD_NICKNAME,
		FIELD_PHONE_NUMBER,
		FIELD_DARKEST_SECRET,
		FIELD_INDEX,
		FIELD_COUNT
	};

class Contact
{
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickame;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
	
	public:
	
		Contact();
		~Contact();
		std::string getField(int f) const;
		void		setField(int f, const std::string &value);
};
