/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:01:30 by molich            #+#    #+#             */
/*   Updated: 2022/09/28 11:26:52 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
class Dog : public Animal
{
    public:
        Dog();
		Dog(std::string nname);
        Dog(const Dog &tocpy);
        ~Dog();
        Dog &operator=(const Dog &tocpy);
		void makeSound() const;

};

#endif