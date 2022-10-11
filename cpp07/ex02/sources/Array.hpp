/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:52:26 by ccravero          #+#    #+#             */
/*   Updated: 2022/10/11 17:57:35 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP
# include <cstdlib>
# include <exception>
#include <iostream>

template < typename T >
class Array
{
	private:
		T		*array;
		size_t	len;
	public:
		Array<T>(): array(0), len(0){}
		Array<T>(unsigned int n) : array(new T[n]), len(n){}
		Array(Array const & src);
		~Array(void);
		Array & operator=(Array const & tocpy);
		T & operator[](unsigned int i);
		void * size(void) const;
};

template < typename T >
Array<T>::Array(Array const & src) : array(new T[src.len]), len(src.len)
{
	for (size_t i = 0; i < len; i++)
		array[i] = src.array[i];
}

template < typename T >
Array<T>::~Array()
{
	delete [](this->array);
}

template < typename T >
Array<T> & Array<T>::operator=(Array const & tocpy)
{
	if (this != &tocpy)
	{
		delete [](this->array);
		this->array = new T[tocpy.len];
		for (size_t i = 0; i < tocpy.len; i++)
			this->array[i] = tocpy.array[i];
		this->len = tocpy.len;
	}
	return (*this);
}

template < typename T >
T & Array<T>::operator[](unsigned int i)
{
	if (i >= len)
		throw std::exception();
	return array[i];
}

template < typename T >
void* Array<T>::size(void) const
{
	return array;
}

#endif