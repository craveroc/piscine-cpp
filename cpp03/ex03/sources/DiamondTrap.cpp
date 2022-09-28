/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:07:02 by ccravero          #+#    #+#             */
/*   Updated: 2022/09/28 11:07:21 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	
	return;

    std::cout<<"Diamond constructeur par defaut\n";
}

DiamondTrap::DiamondTrap(std::string nname)
{
	ClapTrap::name = nname + "_clap_name";
	this->name = nname;
	this->hp = FragTrap::hp;
	this->ep = ScavTrap::ep;
	this->ad = FragTrap::ad;
	std::cout << "Name constructor for DiamondTrap called" << std::endl;
   // std::cout<<"Diamond construction de "<<nname<<std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &tocpy)
{
	*this =tocpy;
     std::cout<<"Diamond constructeur par recopie\n";
}

DiamondTrap::~DiamondTrap()
{
	std::string  nam = getname();
	//this->~ClapTrap();
    std::cout<<"Diamond destructeur "<< nam <<std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &tocpy)
{
    ClapTrap::operator=(tocpy);
    return *this;
}

void DiamondTrap::whoAmI()
{
    if (checkenergy() || checkhp())
		return;

	decrep();
    std::cout<<"am i"<<getname()<<" or am i "<<name<<std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	if (checkenergy() || checkhp())
		return;

	decrep();
	std::cout<<getname()<<" Diamond "<<target<<", causing "<< getad()<<" points of damage!\n";
}