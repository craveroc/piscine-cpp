/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:39:59 by ccravero          #+#    #+#             */
/*   Updated: 2022/09/28 11:28:12 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i<100; i++)
	{
		ideas[i]=i;
	}
	std::cout<<"constructeur de brain par defaut\n";
}


Brain::Brain(const Brain &tocpy)
{
	*this = tocpy;
	std::cout<<"construction de brain par recopie"<<std::endl;
}

Brain::~Brain()
{
	std::cout<<"destruction Brainienne"<<std::endl;
}

Brain &Brain::operator=(const Brain &tocpy)
{
	for (int i = 0; i<100;i++)
	{
		ideas[i] = tocpy.ideas[i];
	}
	return *this;
}

std::string Brain::getidea(int n)
{
	return ideas[n];
}
