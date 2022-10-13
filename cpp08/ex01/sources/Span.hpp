/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:40:27 by ccravero          #+#    #+#             */
/*   Updated: 2022/10/13 10:04:30 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_H
# define TEMPLATE_H

# include <iostream>
# include <vector>
#include <exception>
class Span
{
	private :
		std::vector <int> tab;
		unsigned int size;
	public :
		Span(unsigned int n =0);
		Span(Span const & src);
		~Span();
		Span & operator=(Span const & tocpy);
		void addNumber(int n);
		int shortestSpan();
		int longestSpan();
		class TooFull : public std::exception
		{
			public :
				virtual const char * what() const throw();
		};
		class TooSmall : public std::exception
		{
			public :
				virtual const char * what() const throw();
		};
};

#endif