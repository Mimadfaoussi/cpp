/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:22:57 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/04 11:03:05 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
# include "Intern.hpp"

int main() {
    Intern intern;

    // Valid form creation
    AForm* form1 = intern.makeForm("RobotomyRequestForm", "Bender");
    // Handle memory cleanup for form1 if needed

    // Invalid form creation
    AForm* form2 = intern.makeForm("NonExistentForm", "SomeTarget");
    // Handle memory cleanup for form2 if needed

    // Remember to delete created forms
    delete form1;  // if form1 was created successfully
    delete form2;  // if form2 was created successfully

    return 0;
}
