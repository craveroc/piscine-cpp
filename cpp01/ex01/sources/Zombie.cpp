/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 07:39:03 by ccravero          #+#    #+#             */
/*   Updated: 2022/09/22 08:31:33 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string nam)
{
	name = nam;
	std::cout<<name<<" is born"<<std::endl;
}

Zombie::Zombie()
{}

Zombie::~Zombie()
{
	std::cout<<name<<" is destroyed"<<std::endl;
}

void Zombie::announce()
{
	std::cout<<name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

void Zombie::setname(std::string nam)
{
	name = nam;
}