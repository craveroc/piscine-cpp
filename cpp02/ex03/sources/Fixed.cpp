/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:01:37 by molich            #+#    #+#             */
/*   Updated: 2022/09/26 16:44:39 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include <cmath>
Fixed::Fixed()
{
    val = 0;
}

Fixed::Fixed(int x)
{
    val = x << bits;
}

Fixed::Fixed(float x)
{
    val = roundf(x * pow(2, bits));
}
Fixed::Fixed(const Fixed &tocpy)
{
    val=tocpy.getRawBits();
}

Fixed::~Fixed()
{
}

Fixed &Fixed::operator=(const Fixed &cpy)
{
    val = cpy.val;
	return *this;
}

int Fixed::getRawBits(void)  const
{
    return val;
}

void Fixed::setRawBits( int const raw )
{
    val = raw;
}

 int Fixed::toInt( void ) const
 {
    int ret=0;
    ret = val >> bits;
    return ret;
 }

float Fixed::toFloat( void ) const
{
    float ret = val * ( pow(2, -bits));
    
    return ret;
}

std::ostream &operator<<(std::ostream &out, const Fixed &nbr)
{
    out<<nbr.toFloat();
    return out;
}

Fixed operator+(const Fixed &a, const Fixed &b)
{
    Fixed res;

    res.setRawBits(b.getRawBits() + a.getRawBits());

    return res;
}

Fixed operator-(const Fixed &a, const Fixed &b)
{
    Fixed res;

    res.setRawBits(a.getRawBits() - b.getRawBits());

    return res;
}

Fixed operator*(const Fixed &a, const Fixed &b)
{
    Fixed res = a.toFloat() * b.toFloat();

    return res;
}

Fixed operator/(const Fixed &a, const Fixed &b)
{
    Fixed res = a.toFloat() / b.toFloat();
    return res;
}

bool Fixed::operator>(const Fixed &tocmp) const
{
	return (getRawBits() > tocmp.getRawBits());
}
bool Fixed::operator>=(const Fixed &tocmp) const
{
	return (getRawBits() >= tocmp.getRawBits());
}
bool Fixed::operator==(const Fixed &tocmp) const
{
	return (getRawBits() == tocmp.getRawBits());
}
bool Fixed::operator!=(const Fixed &tocmp) const
{
	return (getRawBits() != tocmp.getRawBits());
}
bool Fixed::operator<=(const Fixed &tocmp) const
{
	return (getRawBits() <= tocmp.getRawBits());
}
bool Fixed::operator<(const Fixed &tocmp) const
{
	return (getRawBits() < tocmp.getRawBits());
}

Fixed Fixed::operator++()
{
	Fixed tmp;
	tmp.val = ++val;
	return tmp;	
}

Fixed Fixed::operator++(int a)
{
	(void)a;
	Fixed tmp;
	tmp.val = val++;
	return tmp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return a;
	return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return a;
	return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return a;
	return b;
}