/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molich <molich@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:01:37 by molich            #+#    #+#             */
/*   Updated: 2022/09/23 19:25:07 by molich           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include <cmath>
Fixed::Fixed()
{
    std::cout<<"constructeur par defaut\n";
    val = 0;
}

Fixed::Fixed(int x)
{
    std::cout<<"constructeur int \n";
    val = x << bits;
}

Fixed::Fixed(float x)
{
    std::cout<<"constructeur float \n";
    val = roundf(x * pow(2, bits));
}
Fixed::Fixed(const Fixed &tocpy)
{
    std::cout<<"constructeur par recopie \n";
    val=tocpy.getRawBits();
}

Fixed::~Fixed()
{
     std::cout<<"destructeur called \n";
}

Fixed &Fixed::operator=(const Fixed &tocpy)
{
     std::cout<<"operateur de copie \n";
    val=tocpy.getRawBits();
    return *this;
}

int Fixed::getRawBits(void)  const
{
   // std::cout<<"getRawBits member function called\n";
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
