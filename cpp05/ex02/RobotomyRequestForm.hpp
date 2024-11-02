/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:07:12 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/02 18:42:45 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	public:
	RobotomyRequestForm(const std::string &target);
	~RobotomyRequestForm();

	void	execute(Bureaucrat const &executor) const override;

	private:
	const std::string	target;
};


# endif