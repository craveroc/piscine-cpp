/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 07:38:54 by ccravero          #+#    #+#             */
/*   Updated: 2022/10/10 18:56:09 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>
#include "Data.h"


int main()
{
	uintptr_t test;
	Data datatest;
	Data *ret;
	
	datatest.a =1;
	datatest.b = 2;
	
	test = serialize(&datatest);
	ret = deserialize(test);

	std::cout<<"&Data test : " <<&datatest<<"\nret : "<< ret<<std::endl;
	
}

uintptr_t serialize(Data* ptr)
{
	uintptr_t test;

	test = reinterpret_cast<uintptr_t>(ptr);
	return test;
}

Data* deserialize(uintptr_t raw)
{
	Data *ret;

	ret = reinterpret_cast<Data*>(raw);
	return ret;
}