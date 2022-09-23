/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molich <molich@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:39:25 by ccravero          #+#    #+#             */
/*   Updated: 2022/09/23 10:39:23 by molich           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int argc, char **argv)
{
   
    if (argc !=2)
        return 0;
    std::string str = argv[1];
    Harl test;
    std::string levelknown[4]={"DEBUG","INFO","WARNING", "ERROR"};
    int choix = -1;
    for (int i = 0; i < 4; i++)
	{
		if(levelknown[i] == argv[1])
			choix = i;
	}
    switch (choix)
	{
        case -1:
            std::cout<<"pas de message normal\n";
            break;
		case 0:
            std::cout<<"[DEBUG]:\n";
            test.complain(levelknown[0]);
            __attribute__((fallthrough));
        case 1:
            std::cout<<"[INFO]:\n";
            test.complain(levelknown[1]);
            __attribute__((fallthrough));   
        case 2:
            std::cout<<"[WARNING]:\n";
            test.complain(levelknown[2]);
            __attribute__((fallthrough));
        case 3:
            std::cout<<"[ERROR]:\n";
            test.complain(levelknown[3]);
	}
}