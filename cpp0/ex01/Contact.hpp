/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 17:15:57 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/06/15 02:14:14 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact {
	public:
	//constructor 
	Contact();

	//Member functions
	void		setFirstName(const std::string& firstName);
	void		setLastName(const std::string& lastName);
	void		setNickName(const std::string& nickName);
	void		setPhoneNumber(const std::string& phoneNumber);
	void		setDarkestSecret(const std::string& darkestSecret);

	std::string	getFirstName() const;
	std::string	getLastName() const;
	std::string	getNickName() const;
	std::string	getPhoneNumber() const;
	std::string	getDarkestSecret() const;
	

	private:
	std::string			firstName;
	std::string			lastName;
	std::string			nickName;
	std::string			phoneNumber;
	std::string			darkestSecret;
	
};

# endif