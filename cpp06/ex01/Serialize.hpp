/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 06:52:12 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/10 07:23:32 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# include <iostream>
# include <string>


struct Data {
	int	id;
	std::string name;
};

class Serializer {
	private:
	Serializer();
	Serializer(const Serializer &other);
	Serializer& operator=(const Serializer &other);
	~Serializer();

	public:
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};

# endif