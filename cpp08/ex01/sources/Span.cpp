/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 08:33:39 by ccravero          #+#    #+#             */
/*   Updated: 2022/10/13 10:06:27 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : size(n)
{
}

Span::Span(Span const & src)
{
	*this = src;
}

Span::~Span()
{
}

Span & Span::operator=(Span const & tocpy)
{
	tab = tocpy.tab;
	size = tocpy.size;
	return (*this);
}

void Span::addNumber(int n)
{
	if(tab.size() == size)
		throw Span::TooFull();
	tab.push_back(n);
}

const char * Span::TooFull::what() const throw()
{
	return ("Too full");
}

const char * Span::TooSmall::what() const throw()
{
	return ("Too small");
}

int Span::shortestSpan()
{
	if (tab.size() < 2)
		throw Span::TooSmall();
	int min = tab[0]; 
	int min2= tab[1];
	std::vector<int>::iterator it = tab.begin();
	std::vector<int>::iterator it2 = tab.begin();
	std::vector<int>::iterator ite = tab.end();
	int span = min - min2;
	if (span < 0)
		span = -span;
	for (it = tab.begin(); it != ite; it++)
	{
		for (it2 = it + 1; it2 != ite; it2++)
		{
			if (*it > *it2 && *it -*it2 < span)
				span = *it - *it2;
			if (*it2 > *it && *it2 - *it < span)
				span = *it2 - *it;
		}
	}
	return (span);
}


int Span::longestSpan()
{
	if (tab.size() < 2)
		throw Span::TooSmall();
	int min = tab[0]; 
	int min2= tab[1];
	std::vector<int>::iterator it = tab.begin();
	std::vector<int>::iterator it2 = tab.begin();
	std::vector<int>::iterator ite = tab.end();
	int span = min - min2;
	if (span < 0)
		span = -span;
	for (it = tab.begin(); it != ite; it++)
	{
		for (it2 = it + 1; it2 != ite; it2++)
		{
			if (*it > *it2 && *it -*it2 > span)
				span = *it - *it2;
			if (*it2 > *it && *it2 - *it > span)
				span = *it2 - *it;
		}
	}
	return (span);
}
