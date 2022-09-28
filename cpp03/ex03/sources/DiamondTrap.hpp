/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:07:00 by ccravero          #+#    #+#             */
/*   Updated: 2022/09/28 08:11:39 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


class DiamondTrap : public FragTrap, public ScavTrap
{
	private :
	   	std::string name;

	public :
		DiamondTrap();
		DiamondTrap(std::string nname);
        DiamondTrap(const DiamondTrap &tocpy);
        ~DiamondTrap();
        DiamondTrap &operator=(const DiamondTrap &tocpy);
		void attack(const std::string& target);

		void whoAmI();

};



#endif