/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:18:36 by ccravero          #+#    #+#             */
/*   Updated: 2022/10/03 11:37:20 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private :
		AMateria *mat[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &tocpy);
        ~MateriaSource();
        MateriaSource &operator=(const MateriaSource &tocpy);
		void learnMateria(AMateria*);
		AMateria *createMateria(std::string const &);
};

#endif