/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:04:41 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/04 11:06:15 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include <map>
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

struct FormType {
	const char* name;
	AForm* (*createFunc)(const std::string& target);
};


class Intern {
	public:
	Intern();
	~Intern();

	AForm* makeForm(const std::string &formName, const std::string &target);

};

# endif