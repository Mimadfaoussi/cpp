/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:22:57 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/10/29 17:40:29 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "Bureaucrat.hpp"
# include "Form.hpp"

int main() {
    try {
        Bureaucrat imad("imad", 2);
        imad.display();
        
        Bureaucrat kamel("kamel", 4);
        kamel.incrementGrade();
        kamel.incrementGrade();
        kamel.incrementGrade();
        kamel.display();

        Bureaucrat defa;
        defa.display();

        Form voiceOfPeople("Leute", 3, 5);
        
        std::cout << voiceOfPeople;
        
        voiceOfPeople.beSigned(imad);
        imad.signForm(voiceOfPeople);
    } catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
