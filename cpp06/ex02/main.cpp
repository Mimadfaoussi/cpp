/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 06:51:47 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/10 07:30:32 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Serialize.hpp"

int main()
{
	Data data;
	data.id = 42;
	data.name = "Imad";

	uintptr_t	raw = Serializer::serialize(&data);
	std::cout << "Serialized data @ = " << raw << std::endl;

	Data*		deserlizedData = Serializer::deserialize(raw);

	if (deserlizedData == &data)
	{
		std::cout << "Deserialization successful!" << std::endl;
		std::cout << "Id : " << deserlizedData->id << std::endl;
		std::cout << "Name : " << deserlizedData->name << std::endl;
	}
	else
	{
		std::cout << "Deserialization unsuccessful X__X" << std::endl;
	}

	return (0);

}