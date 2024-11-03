/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:07:29 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/03 16:24:57 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"
# include "Bureaucrat.hpp"
#include <iostream>
#include <fstream>  

ShrubberyCreationForm::ShrubberyCreationForm(const std::string	&target): AForm("ShrubberyCreationForm", 145, 137), target(target)
{
	std::cout <<  "ShrubberyCreationForm constructor." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout <<  "ShrubberyCreationForm destructor ." << std::endl;
}


void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (this->getFormSigned() == false)
		throw FormNotSigned();
	if (executor.getGrade() > this->getGradeToExecute())
   		throw GradeTooLowException();
	std::ofstream outfile(target + "_shrubbery");
	if (!outfile.is_open())
	{
		std::cerr << "Error: Could not create file " << target + "_shrubbery" << std::endl;
		return;
	}
	outfile <<  "       ###\n";
	outfile <<  "      #o###\n";
	outfile <<  "    #####o###\n";
	outfile <<  "   #o#\\#|#/###\n";
	outfile <<  "    ###\\|/#o#\n";
	outfile <<  "     # }|{  #\n";
	outfile <<  "       }|{\n";
	outfile.close();
	std::cout << "Shrubbery creation complete. File created: " << target + "_shrubbery" << std::endl;
}

