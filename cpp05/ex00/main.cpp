/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:22:57 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/10/28 16:04:59 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat imad("imad", 10);
        imad.display();
        
        Bureaucrat kamel("kamel", 4);
        kamel.incrementGrade();
        kamel.incrementGrade();
        kamel.incrementGrade();
        kamel.display();

        Bureaucrat defa;
        defa.display();

        Bureaucrat tooLow("tooLow", 150);
        tooLow.incrementGrade();
        tooLow.display();
        
    } catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
