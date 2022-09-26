/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:07:00 by ccravero          #+#    #+#             */
/*   Updated: 2022/09/26 19:12:07 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : private ClapTrap
{
	private :
	    ScavTrap();
		ScavTrap(std::string nname);
        ScavTrap(const ScavTrap &tocpy);
        ~ScavTrap();
        //ScavTrap &operator=(const ScavTrap &tocpy);

	public :

}



#endif