/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 09:28:37 by ccravero          #+#    #+#             */
/*   Updated: 2022/09/21 11:28:59 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->nbc=0;
}

void PhoneBook::add()
{
	tab[nbc%8].insertinfo();
	nbc++;
}

void PhoneBook::Search()
{
	int choice;
	int nbcontact;

	if (nbc > 7)
		nbcontact = 7;
	else
		nbcontact = nbc;
	if (!nbc)
	{
		std::cout<<"pas de contact"<<std::endl;
		return;
	}
	for (int i = 0; i < nbc % 8; i++)
		tab[i].printshortinfo(i);
	std::cout<<"rentrez l index pour plus de detail";
	std::cin >> choice;
	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore();
		return ;
	}
	if (choice < 0 || choice > nbcontact)
	{
		std::cout<<"index invalide"<<std::endl;
		return;
	}
	tab[choice].printinfo();
}
