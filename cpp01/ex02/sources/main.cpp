/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 08:33:23 by ccravero          #+#    #+#             */
/*   Updated: 2022/09/22 08:42:21 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string test="HI THIS IS BRAIN";
	std::string *stringPTR = &test;
	std::string &stringREF = test;

	std::cout<<"adresse de string    :"<<&test<<std::endl;
	std::cout<<"adresse de stringPTR :"<<stringPTR<<std::endl;
	std::cout<<"adresse de stringREF :"<<&stringREF<<std::endl;
	

	std::cout<<"contenu de string    :"<<test<<std::endl;
	std::cout<<"contenu de stringPTR :"<<*stringPTR<<std::endl;
	std::cout<<"contenu de stringREF :"<<stringREF<<std::endl;
    return 0;
}