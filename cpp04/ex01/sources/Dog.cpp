/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:39:59 by ccravero          #+#    #+#             */
/*   Updated: 2022/09/28 11:28:12 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("dog")
{
	cerv = new Brain;
	std::cout<<"constructeur par defaut doggesque\n";
}

Dog::Dog(std::string nname) : Animal(nname)
{
	std::cout <<"construction doggesque de "<<type<<std::endl;
}

Dog::Dog(const Dog &tocpy) 
{
	*this = tocpy;
	std::cout<<"construction  doggesque par recopie d'un autre"<<type<<std::endl;
}

Dog::~Dog()
{
	delete cerv;
	std::cout<<"destruction Dogienne de "<<type<<std::endl;
}

Dog &Dog::operator=(const Dog &tocpy)
{
	type = tocpy.type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout<<type<<" fait ouaf ouaf\n";
}

