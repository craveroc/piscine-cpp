/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:02:14 by ccravero          #+#    #+#             */
/*   Updated: 2022/09/26 15:14:27 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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