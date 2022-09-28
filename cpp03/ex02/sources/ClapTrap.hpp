/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:01:30 by molich            #+#    #+#             */
/*   Updated: 2022/09/28 09:01:21 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
    private:
        std::string name;
		unsigned int hp;
		unsigned int ep;
		unsigned int ad;
	
    protected:
        bool checkenergy();
		bool checkhp();
    public:
        ClapTrap();
		ClapTrap(std::string nname);
        ClapTrap(std::string nname, unsigned int hhp, unsigned int eep, unsigned int aad);
        ClapTrap(const ClapTrap &tocpy);
        ~ClapTrap();
        ClapTrap &operator=(const ClapTrap &tocpy);
		void attack(const std::string& target);
        void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void decrep();
        std::string getname();
		unsigned int getad();
};

#endif