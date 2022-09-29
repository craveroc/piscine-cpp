/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 07:38:54 by ccravero          #+#    #+#             */
/*   Updated: 2022/09/29 09:20:31 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"


int main()
{
	//Animal hello;
	Animal *test[10];
	int i;
	for (i = 0; i<5;i++)
		test[i]= new Cat;
	for (i = 5; i<10; i++)
		test[i] = new Dog;
	for (i = 0; i<10; i++)
	{
		test[i]->makeSound();
		//std::cout << test[i]->getidea(2)<<std::endl;
		delete test[i];
	}
return 0;

}