/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molich <molich@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:01:30 by molich            #+#    #+#             */
/*   Updated: 2022/09/23 12:11:43 by molich           ###   ########.fr       */
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
        Fixed(const Fixed &tocpy);
        ~Fixed();
        Fixed &operator=(const Fixed &tocpy);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif