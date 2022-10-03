/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 07:38:54 by ccravero          #+#    #+#             */
/*   Updated: 2022/10/03 15:08:47 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	
	try {
		Bureaucrat test("cloud",0);
		
		test.promote();
	}
	catch (Bureaucrat::GradeTooLowException)
	{
		std::cout<<"too low grade \n";
	}
	catch (Bureaucrat::GradeTooHighException)
	{
		std::cout<<"too high grade\n";
	}
	std::cout<<"hello"<<std::endl;
	
}
