/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 08:29:57 by ccravero          #+#    #+#             */
/*   Updated: 2022/09/21 12:51:08 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string>
#include <iostream>
#include "Contact.hpp"

void Contact::insertinfo()
{
	std::cout << "first name :";
	getline(std::cin,firstname);
	/*if (std::cin.eof()) return;
	std::cout << "last name :";
	getline(std::cin,lastname);
	if (std::cin.eof()) return;
	std::cout << "nickname :";
	getline(std::cin,nickname);
	if (std::cin.eof()) return;
	std::cout << "phone number :";
	getline(std::cin,number);
	if (std::cin.eof()) return;
	std::cout << "darkest secret :";
	getline(std::cin,secret);*/
}

	

	
void Contact::printinfo()
{
	std::cout << "first name :" << firstname << std::endl;
	std::cout << "last name :" << lastname << std::endl;
	std::cout << "nickname :" << nickname << std::endl;
	std::cout << "phonenumber:" << number << std::endl;
	std::cout << "darkest secret:" << secret << std::endl;

}

void Contact::printshortinfo(int i)
{
	std::cout<<i<<"         |"<<convertshort(firstname)<<"|"<<convertshort(lastname)<<"|";
	std::cout<<convertshort(nickname)<<std::endl;
}

std::string Contact::convertshort(std::string str)
{
	std::string tmp;
	if (str.length() >= 10)
	{
		tmp = str.substr(0, 9);
		tmp.push_back('.');
		return (tmp);
	}
	tmp = str;
	while (tmp.length() <10)
	{
		tmp.push_back(' ');
	}
	return(tmp);
}