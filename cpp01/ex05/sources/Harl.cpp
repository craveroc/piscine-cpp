/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:27:15 by ccravero          #+#    #+#             */
/*   Updated: 2022/09/22 15:09:57 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

void Harl::debug( void )
{
	std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !\n";
}
void Harl::info( void )
{
	std::cout<<"I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger ! If you did, I wouldn’t be asking for more !\n";
}

void Harl::warning( void )
{
	std::cout<<"I think I deserve to have some extra bacon for free. I’ve been comingfor years whereas you started working here since last month.\n";
}

void Harl::error( void )
{
	std::cout<<"This is unacceptable ! I want to speak to the manager now.\n";
}

void Harl::complain (std::string level)
{
	void (Harl::*test[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levelknown[4]={"DEBUG","INFO","WARNING", "ERROR"};

	for (int i = 0; i<4; i++)
	{
		if(level == levelknown[i])
			test[i]();
	}
	
}