/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:07:02 by ccravero          #+#    #+#             */
/*   Updated: 2022/09/28 10:41:03 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Default",100,100,30)
{
    std::cout<<"Frag constructeur par defaut\n";
}
FragTrap::FragTrap(std::string nname) : ClapTrap(nname,100,100,30)
{
    std::cout<<"Frag construction de "<<nname<<std::endl;
}

FragTrap::FragTrap(const FragTrap &tocpy) : ClapTrap(tocpy)
{
     std::cout<<"Frag constructeur par recopie\n";
}

FragTrap::~FragTrap()
{
    std::cout<<"Frag destructeur\n";
}

FragTrap &FragTrap::operator=(const FragTrap &tocpy)
{
    ClapTrap::operator=(tocpy);
    return *this;
}

void FragTrap::highFivesGuys()
{
    if (checkenergy() || checkhp())
		return ;
		
	decrep();
    std::cout<<getname()<<" want a high five\n";
}

void FragTrap::attack(const std::string& target)
{
	if (checkenergy() || checkhp())
		return;

	decrep();
	std::cout<<getname()<<" frags "<<target<<", causing "<< getad()<<" points of damage!\n";
}