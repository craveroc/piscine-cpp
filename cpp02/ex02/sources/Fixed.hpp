/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molich <molich@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:01:30 by molich            #+#    #+#             */
/*   Updated: 2022/09/25 14:10:00 by molich           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
    private:
        int val;
        static const int bits =8;
    public:
        Fixed();
        Fixed(int x);
        Fixed(float x);
        Fixed(const Fixed &tocpy);
        ~Fixed();
        Fixed &operator=(const Fixed &tocpy);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;

        Fixed operator+(const Fixed b); const
        Fixed operator-(const Fixed &b);
        Fixed operator*(const Fixed &b);
        Fixed operator/(const Fixed &b);
		
		bool operator==(const Fixed &b);
		bool operator!=( const Fixed &b);
		bool operator<=(const Fixed &b);
		bool operator<(const Fixed &b);
		bool operator>(const Fixed &b);
		bool operator>=(const Fixed &b);

};

std::ostream &operator<<(std::ostream &out, const Fixed &nbr);

#endif