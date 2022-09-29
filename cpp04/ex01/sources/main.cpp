/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 07:38:54 by ccravero          #+#    #+#             */
/*   Updated: 2022/09/29 08:55:12 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"


int main()
{
	Animal *test[10];

	for (int i = 0; i<5;i++)
		test[i]= new Cat;
	for (int i = 50; i<10; i++)
		test[i] = new Dog;
	
	int n;
	std::cin>>n;
	
	for (int i = 0; i<10; i++)
		delete test[i];

return 0;

}