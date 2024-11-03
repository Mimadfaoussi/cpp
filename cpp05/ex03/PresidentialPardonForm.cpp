/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:50:54 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/03 14:51:07 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "PresidentialPardonForm.hpp"
# include "Bureaucrat.hpp"


PresidentialPardonForm::PresidentialPardonForm(const std::string	&target): AForm("ShrubberyCreationForm", 25, 5), target(target)
{
	std::cout <<  "PresidentialPardonForm constructor." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout <<  "PresidentialPardonForm destructor ." << std::endl;
}

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (!getFormSigned())
		throw FormNotSigned();
	if (this->getGradeToExecute() < executor.getGrade())
		throw GradeTooLowException();

	std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;

}
