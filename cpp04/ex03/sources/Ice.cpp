/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:39:59 by ccravero          #+#    #+#             */
/*   Updated: 2022/09/28 11:28:12 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(const Ice &tocpy)
{
	*this = tocpy;
}

Ice::~Ice()
{
}

Ice &Ice::operator=(const Ice &tocpy)
{
	type = tocpy.type;
	return *this;
}

AMateria* Ice::clone() const
{
	AMateria* nouv;

	nouv = new Ice();
	return nouv;
}

void Ice::use(ICharacter& target)
{
	std::cout<<"* shoots an ice bolt at "<< target.getName()<<"*\n";
}
