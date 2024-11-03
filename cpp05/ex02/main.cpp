/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:22:57 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/03 13:43:39 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    try {
        // Create Bureaucrats with different grades
        Bureaucrat highRank("Alice", 1);    // Highest possible grade
        Bureaucrat lowRank("Bob", 150);     // Lowest possible grade

        // Create a PresidentialPardonForm targeting "Charlie"
        PresidentialPardonForm pardonForm("Charlie");

        std::cout << "\n--- Attempting to sign the PresidentialPardonForm with Alice ---" << std::endl;

        // High-ranking Bureaucrat signs the form
        pardonForm.beSigned(highRank);
        std::cout << pardonForm << std::endl;

        std::cout << "\n--- Attempting to execute PresidentialPardonForm with Bob (insufficient grade) ---" << std::endl;

        // Attempt to execute with a low-rank Bureaucrat to test exception handling
        try {
            pardonForm.execute(lowRank);
        } catch (const std::exception &e) {
            std::cerr << e.what() << std::endl;
        }

        std::cout << "\n--- Successfully executing PresidentialPardonForm with Alice ---" << std::endl;

        // High-ranking Bureaucrat successfully executes the form
        pardonForm.execute(highRank);

    } catch (const std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
