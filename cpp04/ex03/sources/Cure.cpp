/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:39:59 by ccravero          #+#    #+#             */
/*   Updated: 2022/09/28 11:28:12 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{

}

Cure::Cure(const Cure &tocpy)
{
	*this = tocpy;
}

Cure::~Cure()
{
}

Cure &Cure::operator=(const Cure &tocpy)
{
	type = tocpy.type;
	return *this;
}

AMateria* clone()
{
	AMateria* nouv;

	nouv = new Cure(*this);
	return nouv;
}

void Cure::use(ICharacter& target)
{
	std::cout<<"* heals "<< target.getname()<<"'s wounds *\n";
}
