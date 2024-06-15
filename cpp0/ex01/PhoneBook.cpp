/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 03:14:44 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/06/15 04:59:49 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : nextIndex(0), currentSize(0){}

void	PhoneBook::addContact(const Contact& contact)
{
	contacts[nextIndex] = contact;
	nextIndex = (nextIndex + 1) % MAX_CONTACTS;
	if (currentSize < MAX_CONTACTS)
		currentSize++;
}

void	PhoneBook::searchContact() const
{
	int	index;

	displayContactList();
	std::cout << "Enter the index of the contact to display: ";
	std::cin >> index;
	
	if (index < 0 || index >= currentSize)
		std::cout << "Invalid index!" << std::endl;
	else
		displayContact(index);
}

void	PhoneBook::displayContactList() const
{
	std::cout	<< std::setw(10) << "Index" << "|"
				<< std::setw(10) << "First name" << "|"
				<< std::setw(10) << "Last name" << "|"
				<< std::setw(10) << "Nickname" << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	    for (int i = 0; i < currentSize; i++) {
			std::cout	<< std::setw(10) << i << "|"
						<< std::setw(10) << truncateField(contacts[i].getFirstName()) << "|"
						<< std::setw(10) << truncateField(contacts[i].getLastName()) << "|"
						<< std::setw(10) << truncateField(contacts[i].getNickName()) << std::endl;
	}
}

