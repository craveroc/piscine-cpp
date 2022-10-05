/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:22:04 by ccravero          #+#    #+#             */
/*   Updated: 2022/10/05 12:31:02 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include <iostream>
#include "Form.hpp"

class Intern 
{
	public :
		Intern();
		Intern(const Intern &tocpy);
		~Intern();
		Intern &operator=(const Intern &tocpy);
		Form* makeForm(std::string formname, std::string target);

};

#endif