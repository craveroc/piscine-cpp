/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:26:55 by ccravero          #+#    #+#             */
/*   Updated: 2022/10/03 12:09:22 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i<4; i++)
		mat[i]=0;
}

MateriaSource::MateriaSource(const MateriaSource &tocpy)
{
	*this = tocpy;
}

MateriaSource::~MateriaSource()
{
	for (int i =0 ; i<4; i++)
		delete mat[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &tocpy)
{
	for (int i =0 ; i<4; i++)
		mat[i]=tocpy.mat[i];
	return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
	int i = 0;
	while (i<4 && mat[i])
		i++;
	if (i==4)
		return;
	mat[i]=m;
}

AMateria *MateriaSource::createMateria(std::string const &ntype)
{
	for (int i = 0; i<4; i++)
	{
		if (mat[i] && mat[i]->getType()== ntype)
			return mat[i]->clone();
	}
	return NULL;
}