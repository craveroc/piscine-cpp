/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:01:30 by molich            #+#    #+#             */
/*   Updated: 2022/09/26 14:07:56 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
    private:
        int val;
        static const int bits = 8;
		
    public:
        Fixed();
        Fixed(int x);
        Fixed(float x);
        Fixed(const Fixed &tocpy);
        ~Fixed();
        Fixed &operator=(const Fixed &cpy);
		
        int getRawBits( void ) const;
        void setRawBits( int const raw );
		
        float toFloat( void ) const;
        int toInt( void ) const;
		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
		bool operator>(const Fixed &tocmp) const;
		bool operator>=(const Fixed &tocmp) const;
		bool operator==(const Fixed &tocmp) const;
		bool operator!=(const Fixed &tocmp) const;
		bool operator<=(const Fixed &tocmp) const;
		bool operator<(const Fixed &tocmp) const;

		Fixed operator++();
		Fixed operator++(int a);
		Fixed operator--();
		Fixed operator--(int a);
};

Fixed operator+(const Fixed &a, const Fixed &b);
Fixed operator-(const Fixed &a, const Fixed &b);
Fixed operator*(const Fixed &a, const Fixed &b);
Fixed operator/(const Fixed &a, const Fixed &b);


std::ostream &operator<<(std::ostream &out, const Fixed &nbr);

#endif