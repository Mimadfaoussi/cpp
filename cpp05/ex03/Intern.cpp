/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:04:38 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/04 11:09:21 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"

Intern::Intern() {
	std::cout << "Intern has been created!"<< std::endl;

};

Intern::~Intern() {
	std::cout << "Intern has been destroyed!"<< std::endl;
}

AForm* createRobotomyRequestForm(const std::string &target)
{
	return new RobotomyRequestForm(target);
}

AForm* createShrubberyCreationForm(const std::string &target)
{
	return new ShrubberyCreationForm(target);
}

AForm* createPresidentialPardonForm(const std::string &target)
{
	return new PresidentialPardonForm(target);
}


AForm* Intern::makeForm(const std::string &formName,const std::string &target)
{
	AForm* formPtr = nullptr;
	int	nbForms;

	FormType formTypes[] = {
		{"RobotomyRequestForm", &createRobotomyRequestForm},
		{"ShrubberyCreationForm", &createShrubberyCreationForm},
		{"PresidentialPardonForm", &createPresidentialPardonForm}
	};
	
	nbForms = sizeof(formTypes) / sizeof(formTypes[0]);

	for (int i = 0; i < nbForms; i++)
	{
		if (formTypes[i].name == formName)
		{
			std::cout << "Intern creates " << formName << std::endl;
			return (formTypes[i].createFunc(target));
		}
	}
	
	std::cout << "Invalid Form name: " << formName << " doesn't exist" << std::endl;
	return (NULL);
}
