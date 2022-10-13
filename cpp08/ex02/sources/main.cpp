/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:19:20 by ccravero          #+#    #+#             */
/*   Updated: 2022/10/13 12:11:20 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>

int main()
{
	std::cout<<"*********Testing MutantStack with iterator**********"<<std::endl;
	try
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		std::cout <<"start : "<< *it << std::endl;
		++it;
		std::cout <<"second : "<< *it << std::endl;
		--it;
		std::cout <<"start or second: "<< *it << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			it++;
		}
		std::stack<int> s(mstack);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout<<"*********Testing MutantStack with reverse_iterator**********"<<std::endl;
	try
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::reverse_iterator it = mstack.rbegin();
		MutantStack<int>::reverse_iterator ite = mstack.rend();
		std::cout <<"start : "<< *it << std::endl;
		++it;
		std::cout <<"second : "<< *it << std::endl;
		--it;
		std::cout <<"start or second: "<< *it << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			it++;
		}
		std::stack<int> s(mstack);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout<<"*********Testing MutantStack with const_iterator**********"<<std::endl;
	try
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::const_iterator it = mstack.begin();
		MutantStack<int>::const_iterator ite = mstack.end();
		std::cout <<"start : "<< *it << std::endl;
		++it;
		std::cout <<"second : "<< *it << std::endl;
		--it;
		std::cout <<"start or second: "<< *it << std::endl;
		while (it != ite)
		{
			//*it = 42;
			std::cout << *it << std::endl;
			it++;
		}
		std::stack<int> s(mstack);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout<<"*********Testing MutantStack with const_reverse_iterator**********"<<std::endl;
	try
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::const_reverse_iterator it = mstack.rbegin();
		MutantStack<int>::const_reverse_iterator ite = mstack.rend();
		std::cout <<"start : "<< *it << std::endl;
		++it;
		std::cout <<"second : "<< *it << std::endl;
		--it;
		std::cout <<"start or second: "<< *it << std::endl;
		while (it != ite)
		{
			//*it = 42;
			std::cout << *it << std::endl;
			it++;
		}
		std::stack<int> s(mstack);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
