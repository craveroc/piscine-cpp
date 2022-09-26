/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 07:38:54 by ccravero          #+#    #+#             */
/*   Updated: 2022/09/26 18:34:04 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main()
{
	ClapTrap test("itsame Claptrap");
	ClapTrap test2;
	ClapTrap test3(test);
	test2 = test;

	test.attack("you");
	test.takeDamage(153);
	test.beRepaired(2);
	test2.beRepaired(1);
	test2.takeDamage(4);
}