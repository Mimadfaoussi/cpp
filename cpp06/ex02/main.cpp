/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 06:51:47 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/10 10:29:55 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

int main() {
	Base* base = generate();
	std::cout << "Identifying using pointer:" << std::endl;
	identify(base);
	std::cout << "Identifying using reference:" << std::endl;
	identify(*base);

	delete base;
	return 0;
}
