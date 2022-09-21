/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:02:45 by molich            #+#    #+#             */
/*   Updated: 2022/09/21 12:41:06 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

using std::cout;

int main ()
{
	PhoneBook rep;
	std::string choice;
	
	do
	{
		cout<<"que faire ? (ADD SEARCH ou EXIT)"<<std::endl;
		getline(std::cin, choice);
		if (choice == "ADD")
			rep.add();
		else if (choice == "SEARCH")
			rep.Search();
		else if (choice == "EXIT")
			return(0);
	}while(!std::cin.eof());
}