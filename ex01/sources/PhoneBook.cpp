/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 09:28:37 by ccravero          #+#    #+#             */
/*   Updated: 2022/09/21 12:55:24 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <sstream>

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
	std::string choice;
	int nbcontact;
	std::stringstream convert;
	int truechoice;
	
	if (nbc >= 8)
		nbcontact = 8;
	else
		nbcontact = nbc;
	if (!nbc)
	{
		std::cout<<"pas de contact"<<std::endl;
		return;
	}
	for (int i = 0; i < nbcontact; i++)
		tab[i].printshortinfo(i + 1);
	std::cout<<"rentrez l index pour plus de detail";
	getline(std::cin, choice);
	convert<<choice;
	convert >> truechoice;
	if (truechoice <= 0 || truechoice > nbcontact)
	{
		std::cout<<"index invalide"<<std::endl;
		return;
	}
	tab[truechoice - 1].printinfo();
}
