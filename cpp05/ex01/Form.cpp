/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:19:42 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/10/29 17:43:18 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"
# include "Bureaucrat.hpp"


Form::Form() : name("Default"), gradeToSign(3), gradeToExecute(5)
{
	formSigned = false;
}

Form::Form(const std::string &name, const int grdSign, const int grdExecute) : name(name), gradeToSign(grdSign), gradeToExecute(grdExecute) {
	formSigned = false;
}

Form::~Form()
{
	std::cout << "Form : " << name << " has been destroyed!\n";
}

const std::string Form::getName() const 
{
	return name;
}


bool Form::getFormSigned() const
{
	return formSigned;
}

const int Form::getGradeToSign() const
{
	return gradeToSign;
}

const int Form::getGradeToExecute() const
{
	return gradeToExecute;
}



void	Form::beSigned(Bureaucrat &br)
{
	if (br.getGrade() <= getGradeToSign())
		formSigned = true;
	else
		throw GradeTooLowException();
}


std::ostream& operator<<(std::ostream& os, const Form& form) {
	os << "Form Name: " << form.getName() << "\n"
	   << "Grade to Sign: " << form.getGradeToSign() << "\n"
		<< "Grade to Execute: " << form.getGradeToExecute() << "\n";
	return os; // Return the output stream to allow chaining
}



    //    << "Signed: " << (form.isSigned() ? "Yes" : "No") << "\n"