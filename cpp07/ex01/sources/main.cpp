/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 07:38:54 by ccravero          #+#    #+#             */
/*   Updated: 2022/10/11 14:29:51 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>
#include "template.h"


int main()
{
	char test[11]="0123456789";
	int test2[10]={0,1,2,3,4,5,6,7,8,9};
	
	iter(test, 10, &print);
	iter(test2, 10, &print);
}

template < typename T >
void iter(T *array, size_t len, void (*f)(T const &))
{
	for (size_t i = 0; i < len; i++)
		f(array[i]);
}

template < typename T >
void print(T const &x)
{
	std::cout << x << std::endl;
}