/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:46:09 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/10/29 12:06:08 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"


Bureaucrat::Bureaucrat() : name("Default") {
	setGrade(10);
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name) {
	setGrade(grade);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat : " << name << " has been destroyed!\n";
}

int	Bureaucrat::getGrade() const{
	return grade;
}

std::string	Bureaucrat::getName() const{
	return name;
}

void	Bureaucrat::incrementGrade(){
	grade = grade - 1;
	if (grade < 1)
		throw GradeTooHighException();

}

void	Bureaucrat::decrementGrade(){
	grade = grade + 1;
	if (grade > 150)
		throw GradeTooLowException();
}


void	Bureaucrat::setGrade(int grd){
	if (grd < 1)
		throw GradeTooHighException();
	if (grd > 150)
		throw GradeTooLowException();
	grade = grd;
}

void	Bureaucrat::signForm(Form &form)
{
	if (form.getFormSigned() == true)
		std::cout << getName() << " signed " << form.getName() << std::endl;
	else
		std::cout << getName() << " couldn’t sign " << form.getName() << " because he doesn't have privilege to do so" << std::endl;
}


void	Bureaucrat::display() const {
	std::cout << "Name : " << name << "  Grade : " << grade << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return os;
}

