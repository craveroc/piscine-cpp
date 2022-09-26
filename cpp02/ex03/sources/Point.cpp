/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:02:17 by ccravero          #+#    #+#             */
/*   Updated: 2022/09/26 15:14:16 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0),y(0)
{
}
Point::Point(const float ax, const float ay) : x(ax), y(ay)
{
}

Point::Point(const Point &tocpy) : x(tocpy.getx()), y(tocpy.gety())
{
	
}

Point::~Point()
{
	
}

//Point &Point::operator=(const Point &cpy) 
//{
//	return ()	
//}

Fixed Point::getx() const
{
	return x;
}

Fixed Point::gety() const
{
	return y;
}