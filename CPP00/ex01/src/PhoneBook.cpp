/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 17:06:55 by jdelattr          #+#    #+#             */
/*   Updated: 2026/04/20 20:21:14 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

static bool	read_non_empty_line(const std::string &prompt, std::string &value)
{
	while (true)
	{
		std::cout << prompt;
		if (!std::getline(std::cin, value))
			return (false);
		if (!value.empty())
			return (true);
		std::cout << "Field cannot be empty." << std::endl;
	}
}

PhoneBook::PhoneBook()
{
	this->_index = 0;
	this->_count = 0;
	return ;
}

PhoneBook::~PhoneBook()
{
	return ;
}

void	PhoneBook::add()
{
	std::string value;

	if (!read_non_empty_line("First name : ", value))
		return ;
	this->_contacts[this->_index].setField(FIELD_FIRST_NAME, value);
	if (!read_non_empty_line("Last name : ", value))
		return ;
	this->_contacts[this->_index].setField(FIELD_LAST_NAME, value);
	if (!read_non_empty_line("Nickname : ", value))
		return ;
	this->_contacts[this->_index].setField(FIELD_NICKNAME, value);
	if (!read_non_empty_line("Phone Number : ", value))
		return ;
	this->_contacts[this->_index].setField(FIELD_PHONE_NUMBER, value);
	if (!read_non_empty_line("Darkest Secret : ", value))
		return ;
	this->_contacts[this->_index].setField(FIELD_DARKEST_SECRET, value);
	std::cout << "\033[32mContact added to the PhoneBook !\033[0m" << std::endl;
	if (this->_count < MAX_CONTACTS)
		this->_count++;
	this->_index = (this->_index + 1) % MAX_CONTACTS;
}

static std::string	format_column(const std::string &value)
{
	if (value.length() > 10)
		return (value.substr(0, 9) + ".");// si la taille depasse 10 le 10e char = .
	return (value);
}

void	PhoneBook::search()
{
	int					selected_index;
	int					i;
	std::string			buffer;
	std::stringstream	stream;

	i = 0;
	if (this->_count == 0)
	{
		std::cout << "\033[31mSorry, you have no friends\033[0m" << std::endl;
		return ;
	}
	while (i < this->_count)
	{
		std::cout << std::right << std::setw(10) << i << "|"
			<< std::right << std::setw(10) << format_column(this->_contacts[i].getField(FIELD_FIRST_NAME)) << "|"
			<< std::right << std::setw(10) << format_column(this->_contacts[i].getField(FIELD_LAST_NAME)) << "|"
			<< std::right << std::setw(10) << format_column(this->_contacts[i].getField(FIELD_NICKNAME))
			<< std::endl;
			i++;
	}
	std::cout << "Please enter the contact index : ";
	if (!std::getline(std::cin, buffer))
		return ;
	stream.str(buffer);
	stream >> selected_index;
	if (stream.fail() || !stream.eof() || selected_index < 0 || selected_index >= this->_count)
	{
		std::cout << "Invalid index" << std::endl ;
		return ;
	}
	std::cout << "first name: " << this->_contacts[selected_index].getField(FIELD_FIRST_NAME) << std::endl;
	std::cout << "last name: " << this->_contacts[selected_index].getField(FIELD_LAST_NAME) << std::endl;
	std::cout << "nickname: " << this->_contacts[selected_index].getField(FIELD_NICKNAME) << std::endl;
	std::cout << "phone number: " << this->_contacts[selected_index].getField(FIELD_PHONE_NUMBER) << std::endl;
	std::cout << "darkest secret: " << this->_contacts[selected_index].getField(FIELD_DARKEST_SECRET) << std::endl;
	return ;
}
