/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 05:09:35 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/06/15 06:05:49 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <iomanip>


void addContact(PhoneBook& phoneBook) {
	Contact contact;
	std::string input;

	std::cout << "Enter first name: ";
	std::cin >> input;
	contact.setFirstName(input);

	std::cout << "Enter last name: ";
	std::cin >> input;
	contact.setLastName(input);

	std::cout << "Enter nickname: ";
	std::cin >> input;
	contact.setNickName(input);

	std::cout << "Enter phone number: ";
	std::cin >> input;
	contact.setPhoneNumber(input);

	std::cout << "Enter darkest secret: ";
	std::cin >> input;
	contact.setDarkestSecret(input);

	phoneBook.addContact(contact);
}

int main() {
	PhoneBook phoneBook;
	std::string command;

	while (true) {
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		std::cin >> command;

		if (command == "ADD") {
			addContact(phoneBook);
		} else if (command == "SEARCH") {
			phoneBook.searchContact();
		} else if (command == "EXIT") {
			break;
		} else {
			std::cout << "Unknown command. Please try again." << std::endl;
		}
	}

	return 0;
}
