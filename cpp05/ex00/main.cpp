/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:22:57 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/10/28 15:56:12 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat imad("imad", 10);
        imad.display();
        
        Bureaucrat kamel("kamel", 1);
        kamel.display();

        Bureaucrat tooLow("tooLow", 151);
        tooLow.display();
        
    } catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
