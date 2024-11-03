/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:22:57 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/03 16:16:11 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	try {
		Bureaucrat bureaucrat("Alice", 50);
		std::cout << bureaucrat << std::endl;

		ShrubberyCreationForm shrubberyForm("Home");
		std::cout << shrubberyForm << std::endl;

		bureaucrat.signForm(shrubberyForm);
		bureaucrat.executeForm(shrubberyForm);

		RobotomyRequestForm robotomyForm("Bob");
		std::cout << robotomyForm << std::endl;

		bureaucrat.signForm(robotomyForm);
		bureaucrat.executeForm(robotomyForm);

		PresidentialPardonForm pardonForm("Charlie");
		std::cout << pardonForm << std::endl;


		bureaucrat.signForm(pardonForm);
		bureaucrat.executeForm(pardonForm);
		
	} catch (const std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	try {
		Bureaucrat lowGradeBureaucrat("Bob", 150);
		std::cout << lowGradeBureaucrat << std::endl;

		ShrubberyCreationForm lowGradeForm("Garden");
		lowGradeBureaucrat.signForm(lowGradeForm);
	} catch (const std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return 0;
}
