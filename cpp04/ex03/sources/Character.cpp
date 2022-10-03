/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 08:57:33 by ccravero          #+#    #+#             */
/*   Updated: 2022/10/03 12:09:17 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string nname)
{
	name = nname;
	for (int i = 0; i < 4; i++)
		mat[i] = NULL;
}

Character::Character(const Character &tocpy)
{
	*this = tocpy;
}

Character::~Character()
{
	for (int i =0 ; i<4; i++)
		delete mat[i];
}

Character &Character::operator=(const Character &tocpy)
{
	for (int i =0 ; i<4; i++)
		mat[i]=tocpy.mat[i];
	return *this;
}

std::string const & Character::getName() const
{
	return name;
}

void Character::equip(AMateria* m)
{
	int i = 0;
	while (i<4 && mat[i])
		i++;
	if (i==4)
		return;
	mat[i]=m;
}

void Character::unequip(int idx)
{
	mat[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
	if (mat[idx])
		mat[idx]->use(target);
}