/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:25:33 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/10/29 11:42:42 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"


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


	private:
	const std::string	name;
	bool				formSigned;
	const int 			gradeToSign;
	const int			gradeToExecute;
	
};


std::ostream& operator<<(std::ostream& os, const Form& form);


# endif
