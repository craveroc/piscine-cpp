/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:07:02 by ccravero          #+#    #+#             */
/*   Updated: 2022/09/28 08:22:38 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Default",100,50,20)
{
    std::cout<<"Scav constructeur par defaut\n";
}
ScavTrap::ScavTrap(std::string nname) : ClapTrap(nname,100,50,20)
{
    std::cout<<"scav construction de "<<nname<<std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &tocpy) : ClapTrap(tocpy)
{
     std::cout<<"Scav constructeur par recopie\n";
}

ScavTrap::~ScavTrap()
{
	std::string  nam = getname();
	//this->~ClapTrap();
    std::cout<<"Scav destructeur "<< nam <<std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &tocpy)
{
    ClapTrap::operator=(tocpy);
    return *this;
}

void ScavTrap::guardGate()
{
    if (checkenergy() || checkhp())
		return;

	decrep();
    std::cout<<getname()<<" is gatekeeping\n";
}
