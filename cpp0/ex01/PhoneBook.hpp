/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 17:15:57 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/06/15 03:14:16 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
# define PhoneBook_HPP

#include "Contact.hpp"

class PhoneBook {
	public:
	//constructor
	PhoneBook();

	//member functions
	void	addContact(const Contact& contact);
	void	searchContact() const;
	void	displayContact(int index) const;

	private:
	// constaants
	static const int MAX_CONTACTS = 8;
	Contact contacts[MAX_CONTACTS];
	int		currentSize;
	int		nextIndex;

	void displayContactList() const;
	void displayContactInfo(const Contact& contact) const;
	std::string truncateField(const std::string& field) const;


};

# endif