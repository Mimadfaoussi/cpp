/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:22:57 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/03 14:27:06 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>   // for std::rand
#include <ctime>     // for std::time

int main() {
    std::srand(std::time(0));  // Seed randomness once

    Bureaucrat bob("Bob", 45);
    RobotomyRequestForm form("Test Target");

    form.beSigned(bob); // Bob signs the form

    try {
        form.execute(bob);  // Bob attempts to execute the robotomy
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
