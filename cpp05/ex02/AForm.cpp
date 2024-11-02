/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:19:42 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/02 18:05:48 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AForm.hpp"
# include "Bureaucrat.hpp"


AForm::AForm() : name("Default"), gradeToSign(3), gradeToExecute(5)
{
	formSigned = false;
}

AForm::AForm(const std::string &name, const int grdSign, const int grdExecute) : name(name), gradeToSign(grdSign), gradeToExecute(grdExecute) {
	formSigned = false;
}

AForm::~AForm()
{
	std::cout << "Form : " << name << " has been destroyed!\n";
}

const std::string AForm::getName() const 
{
	return name;
}


bool AForm::getFormSigned() const
{
	return formSigned;
}

const int AForm::getGradeToSign() const
{
	return gradeToSign;
}

const int AForm::getGradeToExecute() const
{
	return gradeToExecute;
}



void	AForm::beSigned(Bureaucrat &br)
{
	if (br.getGrade() <= getGradeToSign())
		formSigned = true;
	else
		throw GradeTooLowException();
}


std::ostream& operator<<(std::ostream& os, const AForm& form) {
	os << "Form Name: " << form.getName() << "\n"
	   << "Grade to Sign: " << form.getGradeToSign() << "\n"
		<< "Grade to Execute: " << form.getGradeToExecute() << "\n";
	return os; // Return the output stream to allow chaining
}



    //    << "Signed: " << (form.isSigned() ? "Yes" : "No") << "\n"