/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:21:20 by ccravero          #+#    #+#             */
/*   Updated: 2022/10/05 12:32:26 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Form* Intern::makeForm(std::string formname, std::string target)
{
	std::string levelknown[3]={ "presidential pardon", "robotomy request", "shrubbery creation"};
    int choix = -1;
    for (int i = 0; i < 3; i++)
	{
		if(levelknown[i] == formname)
			choix = i;
	}
	switch (choix)
	{
	case 0:
		return new PresidentialPardonForm(target);
	case 1:
		return new RobotomyRequestForm(target);
	case 2:
		return new ShrubberyCreationForm(target);
	default:
		std::cout<<"fail\n";
		return NULL;
	}
}

Intern::Intern()
{
}

Intern::Intern(const Intern &tocpy)
{
	(void ) tocpy;
}

Intern::~Intern()
{
}

Intern &Intern::operator=(const Intern &tocpy)
{
	(void)tocpy;
	return *this;
}