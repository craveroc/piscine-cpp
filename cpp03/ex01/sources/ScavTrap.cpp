/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molich <molich@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:07:02 by ccravero          #+#    #+#             */
/*   Updated: 2022/09/27 06:51:51 by molich           ###   ########.fr       */
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
    std::cout<<"Scav destructeur\n";
}

ScavTrap &ScavTrap::operator=(const ScavTrap &tocpy)
{
    ClapTrap::operator=(tocpy);
    return *this;
}

void ScavTrap::guardGate()
{
    if (checkenergy() || checkhp())
        return ;
    std::cout<<getname()<<" is gatekeeping\n";
}
