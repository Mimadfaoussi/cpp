/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:37:20 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/15 19:13:18 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SPAN_HPP
# define SPAN_HPP

# include "iostream"
# include <algorithm>
# include <exception>
# include <vector>
# include <ctime>
# include <cstdlib>

class Span {
	public:
	Span(unsigned int N);
	Span(const Span &other);
	~Span();
	Span& operator=(const Span &other);

	void			addNumber(unsigned int nb);
	void			addNumbers(std::vector<int>::iterator const &start, std::vector<int>::iterator const &end);		
	int				shortestSpan() const;
	int				longestSpan() const;
	void			printNumbers(std::vector<int> nbs) const;

	class OutOfRangeException : public std::exception 
	{
		public:
		const char* what() const throw();
	};
	class NoDistanceException : public std::exception
	{
		public:
		const char* what() const throw();
	};


	private:
	unsigned int 		N;
	std::vector<int>	_numbers;
	Span();
};

# endif 
