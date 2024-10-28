/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:22:57 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/10/28 14:25:50 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat john("John", 42);
        std::cout << john << std::endl;

        Bureaucrat jane("Jane", 1);
        std::cout << jane << std::endl;

        // Triggering exceptions for test
        Bureaucrat tooHigh("TooHigh", 151);  // This should throw GradeTooHighException
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
