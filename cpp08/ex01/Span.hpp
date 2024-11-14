/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:37:20 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/14 11:30:13 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SPAN_HPP
# define SPAN_HPP

# include "iostream"
# include <algorithm>
# include <exception>
# include <vector>


template <typename T>

class Span {
	public:
	Span(unsigned int N);
	Span(const Span &other);
	~Span();
	Span& operator=(const Span &other);

	void			addNumber(unsigned int nb);
	unsigned int	shortestSpan() const;
	unsigned int	longestSpan() const;

	class OutOfRangeException : public std::exception 
	{
		public:
		const char* what() const throw();
	};
	class UnderRangeException : public std::exception 
	{
		public:
		const char* what() const throw();
	};

	unsigned int	getSize() const;

	private:
	unsigned int 		N;
	std::vector<int>	_numbers;
}	

# endif 
