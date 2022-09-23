/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molich <molich@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:01:37 by molich            #+#    #+#             */
/*   Updated: 2022/09/23 12:11:28 by molich           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout<<"constructeur par defaut \n";
    val = 0;
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
    std::cout<<"getRawBits member function called\n";
    return val;
}

void Fixed::setRawBits( int const raw )
{
    val = raw;
}
