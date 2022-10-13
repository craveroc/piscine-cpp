/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 07:38:54 by ccravero          #+#    #+#             */
/*   Updated: 2022/10/13 10:24:40 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>

template <typename T>
int easyfind(T const &v, int const &i)
{
	typename T::const_iterator it=v.begin();
	typename T::const_iterator ite=v.end();
	while (it != ite)
	{
		if (*it == i)
		{
			std::cout << "trouve "<< std::endl;
			return (0);
		}
		
		it++;
	}
	return (-1);
}
int main()
{
	std::vector<int> v;
	std::list<int> l;
	int i=0;

	

	for (i = 0; i < 10; i++)
	{
		v.push_back(i);
		l.push_back(-i);
	}
	if (easyfind(v, 5 ) == - 1)
		std::cout<<"rien trouve"<<std::endl;
	if (easyfind(l, 5 ) == - 1)
		std::cout<<"rien trouve"<<std::endl;
	if (easyfind(v, 15) == - 1)
		std::cout<<"rien trouve"<<std::endl;
	if (easyfind(l,-4 ) == - 1)
		std::cout<<"rien trouve"<<std::endl;
	if (easyfind(v, -4) == - 1)
		std::cout<<"rien trouve"<<std::endl;
	std::cout<<"le resultat doit etre \ntrouve\nrien trouve\nrien trouve\ntrouve\nrien trouve"<<std::endl;

}

