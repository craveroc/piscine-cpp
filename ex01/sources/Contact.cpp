/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 08:29:57 by ccravero          #+#    #+#             */
/*   Updated: 2022/09/21 09:26:54 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string>
#include <iostream>
#include "Contact.hpp"

void Contact::insertinfo()
{
	std::cout << "first name :";
	std::cin >> firstname;
	std::cout << "last name :";
	std::cin >> lastname;
	std::cout << "nickname :";
	std::cin >> nickname;
	std::cout << "phone number :";
	std::cin >> number;
	std::cout << "darkest secret :";
	std::cin >> secret;
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
	std::cout<<convertshort(firstname)<<std::endl;
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