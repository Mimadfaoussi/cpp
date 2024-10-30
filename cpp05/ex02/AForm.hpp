/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:25:33 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/10/30 13:57:30 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FORM_HPP
# define FORM_HPP
# include <string>
# include <iostream>
# include <stdexcept>

class Bureaucrat;

class Form {
	public:
	Form();
	Form(const std::string &name, const int gradeToSign, const int gradeToExecute);
	~Form();

	//    getters : 

	const std::string	  getName() const;
	bool			 	  getFormSigned() const;
	const int 			  getGradeToSign() const;
	const int 			  getGradeToExecute() const;

	void				  beSigned(Bureaucrat &br);

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

	private:
	const std::string	name;
	bool				formSigned;
	const int 			gradeToSign;
	const int			gradeToExecute;
	
};


std::ostream& operator<<(std::ostream& os, const Form& form);


# endif
