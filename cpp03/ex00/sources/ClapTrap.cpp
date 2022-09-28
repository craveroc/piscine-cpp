/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:39:59 by ccravero          #+#    #+#             */
/*   Updated: 2022/09/28 11:25:19 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hp(10), ep(10), ad(0)
{
	std::cout<<"constructeur par defaut\n";
}

ClapTrap::ClapTrap(std::string nname) : name(nname),hp(10),ep(10),ad(0)
{
	std::cout <<"construction de "<<name<<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &tocpy)
{
	name = tocpy.name;
	hp = tocpy.hp;
	ep = tocpy.ep;
	ad = tocpy.ad;
	std::cout<<"construction par recopie d'un autre"<<name<<std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout<<"destruction claptrapienne de "<<name<<std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &tocpy)
{
	name = tocpy.name;
	hp = tocpy.hp;
	ep = tocpy.ep;
	ad = tocpy.ad;
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (!hp)
	{
		std::cout<<name<<" is KO\n";
		return;
	}
	if(!ep)
	{
		std::cout<<name<<" have no energy\n";
		return ;
	}
	ep--;
	std::cout<<name<<" attacks "<<target<<", causing "<<ad<<" points of damage!\n";
	
}
