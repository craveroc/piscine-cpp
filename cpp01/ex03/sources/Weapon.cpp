/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 09:02:48 by ccravero          #+#    #+#             */
/*   Updated: 2022/09/22 09:56:41 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

std::string &Weapon::getType()
{
	std::string &typeREF=type;
	return typeREF;
}

void Weapon::setType(std::string typ)
{
	type = typ;
}

Weapon::Weapon(std::string typ)
{
	type = typ;
}