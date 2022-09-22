/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:15:26 by ccravero          #+#    #+#             */
/*   Updated: 2022/09/22 11:14:20 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string nam)
{
	name=nam;
	weap = 0; 
}
	
void HumanB::attack()
{

	std::cout<<name<<" attacks with ";
	if (weap)
		std::cout<<weap->getType()<<std::endl;	
	else
		std::cout<<"nothing\n";
}

void HumanB::setWeapon(Weapon &wea)
{
	weap = &wea;
}