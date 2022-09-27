/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molich <molich@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:39:59 by ccravero          #+#    #+#             */
/*   Updated: 2022/09/27 06:49:32 by molich           ###   ########.fr       */
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

ClapTrap::ClapTrap(std::string nname, unsigned int hhp, unsigned int eep, unsigned int aad) : name(nname),hp(hhp),ep(eep),ad(aad)
{
	std::cout <<"construction claptrapienne parametrée de "<<name<<std::endl;
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
{}

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

void ClapTrap::takeDamage(unsigned int amount)
{
	
	if (amount > hp)
		hp = 0;
	else
		hp -= amount;
	std::cout<<name<<" takes "<<amount<< " damage he has"<<hp<<std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
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
	hp+=amount;
	std::cout<<name<<" is repaired for"<<amount<<" points of damage he has"<<hp<<std::endl;
}

std::string ClapTrap::getname()
{
	return (name);
}

bool ClapTrap::checkenergy()
{
	if(!ep)
	{
		std::cout<<name<<" have no energy\n";
		return true ;
	}
	return false;
}

bool ClapTrap::checkhp()
{
	if (!hp)
	{
		std::cout<<name<<" is KO\n";
		return true;
	}
	return false;
}
