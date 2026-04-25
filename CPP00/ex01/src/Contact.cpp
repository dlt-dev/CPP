/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 16:44:27 by jdelattr          #+#    #+#             */
/*   Updated: 2026/04/25 11:32:15 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

#include <iostream>

Contact::Contact(){

	return ;
}

Contact::~Contact(){
	
	return ;
}

std::string Contact::getField(int f) const
{
	if (f == FIELD_FIRST_NAME)
		return (this->_firstName);
	if (f == FIELD_LAST_NAME)
		return (this->_lastName);
	if (f == FIELD_NICKNAME)
		return (this->_nickame);
	if (f == FIELD_PHONE_NUMBER)
		return (this->_phoneNumber);
	if (f == FIELD_DARKEST_SECRET)
		return (this->_darkestSecret);
	return ("");
}

void	Contact::setField(int f, const std::string &value)
{
	if (f == FIELD_FIRST_NAME)
		this->_firstName = value;
	else if (f == FIELD_LAST_NAME)
		this->_lastName = value;
	else if (f == FIELD_NICKNAME)
		this->_nickame = value;
	else if (f == FIELD_PHONE_NUMBER)
		this->_phoneNumber = value;
	else if (f == FIELD_DARKEST_SECRET)
		this->_darkestSecret = value;
}

