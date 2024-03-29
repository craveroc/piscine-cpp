/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:02:14 by ccravero          #+#    #+#             */
/*   Updated: 2022/09/26 17:24:04 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
#include <iostream>
#include "Fixed.hpp"

class Point
{
	private:
		const Fixed x;
		const Fixed y;
		
	public:
		Point();
		Point(const float ax, const float ay);
		Point(const Point &tocpy);
		~Point();
		Point &operator=(const Point &cpy);
		
		Fixed getx() const;
		Fixed gety() const;
};

#endif