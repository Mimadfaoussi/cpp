/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:07:17 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/03 14:27:31 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp"
# include "Bureaucrat.hpp"


RobotomyRequestForm::RobotomyRequestForm(const std::string &target): AForm("RobotomyRequestForm", 72, 45), target(target)
{
	std::cout << "RobotomyRequestForm constructor." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor." << std::endl;
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (!getFormSigned())
		throw FormNotSigned();
	if (this->getGradeToExecute() < executor.getGrade())
		throw GradeTooLowException();
	std::cout << "Bzzzzt... drilling noise..." << std::endl;
	if (std::rand() % 2 == 0) {
		std::cout << target << " has been robotomized successfully." << std::endl;
	} else {
		std::cout << target << "'s robotomy failed." << std::endl;
	}
}