/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 07:38:54 by ccravero          #+#    #+#             */
/*   Updated: 2022/10/05 11:26:39 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	ShrubberyCreationForm form("la target");
	//std::cout<<test<<std::endl;
	Bureaucrat bur("Michel", 50);
	form.besigned(bur);
	
//	while (1)
	{
	try 
	{
	bur.executeForm(form);
	}
	catch (std::exception & e)
	{
		std::cout<<e.what()<<std::endl;
	}
	}
}
