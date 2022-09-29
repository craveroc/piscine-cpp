/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:01:30 by molich            #+#    #+#             */
/*   Updated: 2022/09/29 09:35:58 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class AMateria
{
    protected:
        std::string type;
		
    public:
        AMateria();
		AMateria(std::string nname);
        AMateria(const AMateria &tocpy);
        virtual ~AMateria();
        AMateria &operator=(const AMateria &tocpy);
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
		std::string const & getType() const; 
};

#endif

