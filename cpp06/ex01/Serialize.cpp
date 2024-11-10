/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 06:52:00 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/10 07:32:20 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Serialize.hpp"

Serializer::Serializer(){};
Serializer::Serializer(const Serializer &other){(void)other;};
Serializer::~Serializer(){};

uintptr_t	Serializer::serialize(Data* ptr)
{
	return reinterpret_cast <uintptr_t> (ptr);
}

Data*		Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast <Data*> (raw);
}

