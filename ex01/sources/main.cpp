/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:02:45 by molich            #+#    #+#             */
/*   Updated: 2022/09/21 11:46:09 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main ()
{
	PhoneBook rep;
	std::string choice;
	
	while(1)
	{
		std::cout<<"que faire ? (ADD SEARCH ou EXIT)"<<std::endl;
		getline(std::cin, choice);
		//std::cin>>choice;
		//std::cin.ignore();
	//	if (std::cin.fail())
	//		std::cin.clear();
		if (choice == "ADD")
			rep.add();
		else if (choice == "SEARCH")
			rep.Search();
		else if (choice == "EXIT")
			return(0);
	}

}