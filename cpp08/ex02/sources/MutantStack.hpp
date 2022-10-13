/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:52:26 by ccravero          #+#    #+#             */
/*   Updated: 2022/10/13 11:59:34 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP
# include <stack>
# include <exception>
# include <iostream>

template<typename T>
class MutantStack : public std::stack<T>
{
	public :
		MutantStack();
		MutantStack(MutantStack const & src);
		~MutantStack();
		MutantStack & operator=(MutantStack const & tocpy);
		
		typedef typename std::stack<T>::container_type::iterator iterator;
		typename MutantStack<T>::iterator begin();
		typename MutantStack<T>::iterator end();

		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typename MutantStack<T>::const_iterator cbegin() const;
		typename MutantStack<T>::const_iterator cend() const;
		
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typename MutantStack<T>::reverse_iterator rbegin();
		typename MutantStack<T>::reverse_iterator rend();
		
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
		typename MutantStack<T>::const_reverse_iterator crbegin() const;
		typename MutantStack<T>::const_reverse_iterator crend() const;
		
};

template<typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
}

template<typename T>
MutantStack<T>::MutantStack(MutantStack const & src) : std::stack<T>(src)
{
}


template<typename T>
MutantStack<T>::~MutantStack()
{
}



template<typename T>
MutantStack<T> & MutantStack<T>::operator=(MutantStack<T> const & tocpy)
{
	std::stack<T>::operator=(tocpy);
	return (*this);
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
 	return (std::stack<T>::c.begin());
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
 	return (std::stack<T>::c.end());
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cbegin() const
{
 	return (std::stack<T>::c.cbegin());
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cend() const
{
 	return (std::stack<T>::c.cend());
}

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin()
{
 	return (std::stack<T>::c.rbegin());
}

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend()
{
 	return (std::stack<T>::c.rend());
}

template<typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crbegin() const
{
 	return (std::stack<T>::c.crbegin());
}

template<typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crend() const
{
 	return (std::stack<T>::c.crend());
}

#endif