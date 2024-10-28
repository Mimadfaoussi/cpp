/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:33:05 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/10/28 13:15:00 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BUREAUCRAT_H
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <stdexcept> 

class Bureaucrat {
	public:
	Bureaucrat(const std::string &name, int grade) : name(name) {
		setGrade(grade);
	}
	int	getGrade() const{
		return grade;
	}

	void	setGrade(int grd){
		if (grd < 1 || grd > 150)
			throw std::out_of_range("grade must be between 1 and 150\n");
		grade = grd;
	}

	void	display() const {
		std::cout << "Name : " << name << "  Grade : " << grade << std::endl;
	}

	protected:
	const std::string	name;
	int			grade;
};

# endif