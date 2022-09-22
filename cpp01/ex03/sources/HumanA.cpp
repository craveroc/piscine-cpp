/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:15:20 by ccravero          #+#    #+#             */
/*   Updated: 2022/09/22 11:16:27 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string nam, Weapon &wea) :weap(wea)
{
	name=nam;
}
	
void HumanA::attack()
{
	std::cout<<name<<" attacks with "<<weap.getType()<<std::endl;	
}
