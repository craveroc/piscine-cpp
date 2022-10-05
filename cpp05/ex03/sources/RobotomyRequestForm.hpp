/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:01:30 by molich            #+#    #+#             */
/*   Updated: 2022/09/29 09:35:58 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"
# include <exception>
# include <fstream>
# include <cstdlib>

class Bureaucrat;

class RobotomyRequestForm :public Form
{
	
    private:
        std::string target;
		
    public:
		RobotomyRequestForm(std::string ntarget = "Michel");
        RobotomyRequestForm(const RobotomyRequestForm &tocpy);
        virtual ~RobotomyRequestForm();
        RobotomyRequestForm &operator=(const RobotomyRequestForm &tocpy);
		virtual void exec() const;
		

		class GradeTooLowException : public std::exception 
		{
			virtual const char * what() const throw();
		};
		class GradeTooHighException : public std::exception 
		{
			virtual const char* what() const throw();
		};

};


std::ostream &operator<<(std::ostream &out, RobotomyRequestForm Formulaire);
#endif


