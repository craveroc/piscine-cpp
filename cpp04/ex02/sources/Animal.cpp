/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:39:59 by ccravero          #+#    #+#             */
/*   Updated: 2022/09/28 11:28:12 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout<<"constructeur par defaut\n";
}

Animal::Animal(std::string nname) : type(nname)
{
	std::cout <<"construction de "<<type<<std::endl;
}

Animal::Animal(const Animal &tocpy)
{
	*this = tocpy;
	std::cout<<"construction par recopie d'un autre"<<type<<std::endl;
}

Animal::~Animal()
{
	std::cout<<"destruction Animalienne de "<<type<<std::endl;
}

Animal &Animal::operator=(const Animal &tocpy)
{
	type = tocpy.type;
	return *this;
}

void Animal::makeSound() const
{
	std::cout<<type<<" fait un bruit\n";
}

std::string Animal::gettype()
{
	return type;
}