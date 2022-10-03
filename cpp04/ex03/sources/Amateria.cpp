/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:39:59 by ccravero          #+#    #+#             */
/*   Updated: 2022/09/29 09:36:26 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	//std::cout<<"constructeur par defaut\n";
}

AMateria::AMateria(std::string nname) : type(nname)
{
	//std::cout <<"construction de "<<type<<std::endl;
}

AMateria::AMateria(const AMateria &tocpy)
{
	*this = tocpy;
	//std::cout<<"construction par recopie d'un autre"<<type<<std::endl;
}

AMateria::~AMateria()
{
	//std::cout<<"destruction AMateriaienne de "<<type<<std::endl;
}

AMateria &AMateria::operator=(const AMateria &tocpy)
{
	type = tocpy.type;
	return *this;
}

std::string const &AMateria::getType() const
{
	return type;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}

