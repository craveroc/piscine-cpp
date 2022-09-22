/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 07:38:54 by ccravero          #+#    #+#             */
/*   Updated: 2022/09/22 08:18:53 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie* zombieHorde( int N, std::string name );


int main()
{
	Zombie* horde;

	horde = zombieHorde(5, "horde de Zombie");
	if (!horde)
		std::cout<<"erreur allocation \n";
	for (int i = 0; i<5; i++)
		horde[i].announce();
	delete[] horde;	
}