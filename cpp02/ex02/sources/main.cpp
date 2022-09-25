/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molich <molich@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 07:38:54 by ccravero          #+#    #+#             */
/*   Updated: 2022/09/25 14:01:59 by molich           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <stdio.h>
#include <cmath>

int main()
{
    Fixed a;
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );
    
     a = Fixed( 1234.4321f );
    
     std::cout << "a is " << a << std::endl;
     std::cout << "b is " << b << std::endl;
     std::cout << "c is " << c << std::endl;
     std::cout << "d is " << d << std::endl;
    
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl; 

	b = c + a;
	
    std::cout << "b is " << b << std::endl;

 }