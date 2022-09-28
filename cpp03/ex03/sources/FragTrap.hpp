/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:07:00 by ccravero          #+#    #+#             */
/*   Updated: 2022/09/28 11:01:58 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	private :
	   

	public :
		FragTrap();
		FragTrap(std::string nname);
        FragTrap(const FragTrap &tocpy);
        ~FragTrap();
        FragTrap &operator=(const FragTrap &tocpy);

		void highFivesGuys(void);
};



#endif