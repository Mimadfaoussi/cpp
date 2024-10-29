/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:33:05 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/10/29 12:03:15 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <stdexcept>

class GradeTooHighException: public std::exception {
	public : 
	const char* what() const throw() {
		return "Grade is too high!";
	}
};

class GradeTooLowException: public std::exception {
	public :
	const char* what() const throw() {
		return "Grade is too low!";
	}
};



class Bureaucrat {
	public:
	Bureaucrat(const std::string &name, int grade);
	Bureaucrat();
	~Bureaucrat();

	int	getGrade() const;
	std::string	getName() const;
	void	incrementGrade();
	void	decrementGrade();
	void	setGrade(int grd);
	void	display() const;

	void	signForm(Form &form);

	protected:
	const std::string	name;
	int					grade;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

# endif