/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:39:59 by ccravero          #+#    #+#             */
/*   Updated: 2022/09/28 11:28:12 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("cat")
{
	cerv = new Brain;
	std::cout<<"constructeur cattesque par defaut\n";
}

Cat::Cat(std::string nname) : Animal(nname)
{
	std::cout <<"construction cattesque de "<<type<<std::endl;
}

Cat::Cat(const Cat &tocpy)
{
	*this = tocpy;
	std::cout<<"construction par recopie d'un autre"<<type<<std::endl;
}

Cat::~Cat()
{
	delete cerv;
	std::cout<<"destruction Catienne de "<<type<<std::endl;
}

Cat &Cat::operator=(const Cat &tocpy)
{
	type = tocpy.type;
	delete cerv;
	cerv = new Brain(*(tocpy.cerv));
	return *this;
}

void Cat::makeSound() const
{
	std::cout<<type<<" fait Miaou et pense "<< cerv->getidea(1)<<std::endl;
}


std::string Cat::getidea(int n)
{
	return cerv->getidea(n);
}