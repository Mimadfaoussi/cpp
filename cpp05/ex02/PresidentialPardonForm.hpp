/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:07:12 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/03 13:44:19 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	public:
	PresidentialPardonForm(const std::string &target);
	~PresidentialPardonForm();

	void	execute(const Bureaucrat &executor) const;
	// const std::string	getTarget() const;
	private:
	const std::string	target;
};


# endif