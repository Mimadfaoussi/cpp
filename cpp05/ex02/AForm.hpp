/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:25:33 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/03 13:31:22 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FORM_HPP
# define FORM_HPP
# include <string>
# include <iostream>
# include <stdexcept>

class Bureaucrat;

class AForm {
	public:
	AForm();
	AForm(const std::string &name, const int gradeToSign, const int gradeToExecute);
	virtual ~AForm();

	//    getters : 

	virtual const std::string	  getName() const;
	virtual bool			 	  getFormSigned() const;
	virtual const int 			  getGradeToSign() const;
	virtual const int 			  getGradeToExecute() const;

	virtual void				  beSigned(Bureaucrat &br);

	virtual void				  execute(Bureaucrat const &executor) const = 0;

	class GradeTooLowException : public std::exception {
		public:
			const char* what() const throw() {
				return "Grade is too low!";
			}
	};

	class GradeTooHighException : public std::exception {
		public:
			const char* what() const throw() {
				return "Grade is too high!";
			}
	};

	class FormNotSigned : public std::exception {
		public:
			const char* what() const throw() {
				return "Form is not signed";
			}
	};

	private:
	const std::string	name;
	bool				formSigned;
	const int 			gradeToSign;
	const int			gradeToExecute;
	
};


std::ostream& operator<<(std::ostream& os, const AForm& form);


# endif
