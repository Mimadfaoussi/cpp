/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 22:20:37 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/06/15 02:17:27 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() : firstName(""), lastName(""), nickName(""), phoneNumber(""), darkestSecret(""){}

void Contact::setFirstName(const std::string& firstName)
{
	this->firstName = firstName;
}

void Contact::setLastName(const std::string& lastName)
{
	this->lastName = lastName;
}

void Contact::setNickName(const std::string& nickName)
{
	this->nickName = nickName;
}

void Contact::setPhoneNumber(const std::string& phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(const std::string& darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

std::string	Contact::getFirstName() const 
{
	return firstName;
}

std::string	Contact::getLastName() const 
{
	return lastName;
}

std::string	Contact::getNickName() const 
{
	return nickName;
}

std::string	Contact::getPhoneNumber() const 
{
	return phoneNumber;
}

std::string	Contact::getDarkestSecret() const 
{
	return darkestSecret;
}
