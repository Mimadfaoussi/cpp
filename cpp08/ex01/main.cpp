/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:37:20 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/14 11:30:13 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "easyfind.hpp"

int main()
{
    std::vector<int>    vec;

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(41);
    vec.push_back(45);

    try{
        easyfind(vec, 30);
        easyfind(vec, 33);
    }catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}