/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 07:38:54 by ccravero          #+#    #+#             */
/*   Updated: 2022/09/26 17:08:54 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <stdio.h>
#include <cmath>
#include "Point.hpp"


bool bsp( Point const a, Point const b, Point const c, Point const point);


int main()
{
	Point a(0,10);
	Point b(10,0);
	Point c(0,0);
	Point point(4, 1);
	std::cout<<bsp(a, b, c, point)<<std::endl;

}