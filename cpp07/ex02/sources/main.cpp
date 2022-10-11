/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:19:20 by ccravero          #+#    #+#             */
/*   Updated: 2022/10/11 17:51:02 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <time.h>


int main()
{ 
	Array<int> numbers(100);
	Array<int> numbers2(100);
    int* mirror = new int[100];
	(void) mirror;
     srand(time(NULL));
    for (int i = 0; i < 100; i++)
    {
        const int value = i;
        numbers[i] = value;
		numbers2[i] = value;
        mirror[i] = value;
    }
   // SCOPE
 	{
       Array<int> tmp = numbers;
       Array<int> test(tmp);
	   tmp = numbers2;
    }

    for (int i = 0; i < 100; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << " c'est normal \n";
    }
    try
    {
        numbers[100] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << " c'est normal\n";
    }

    for (int i = 0; i < 100; i++)
    {
        numbers[i] = rand();
    }
     delete [] mirror;
     return 0;
}