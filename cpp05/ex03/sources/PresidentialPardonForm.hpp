/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:01:30 by molich            #+#    #+#             */
/*   Updated: 2022/09/29 09:35:58 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"
# include <exception>
# include <fstream>

class Bureaucrat;

class PresidentialPardonForm :public Form
{
	
    private:
        std::string target;
		
    public:
		PresidentialPardonForm(std::string ntarget = "Michel");
        PresidentialPardonForm(const PresidentialPardonForm &tocpy);
        virtual ~PresidentialPardonForm();
        PresidentialPardonForm &operator=(const PresidentialPardonForm &tocpy);
		virtual void exec() const ;
		

		class GradeTooLowException : public std::exception 
		{
			virtual const char * what() const throw();
		};
		class GradeTooHighException : public std::exception 
		{
			virtual const char* what() const throw();
		};

};


std::ostream &operator<<(std::ostream &out, PresidentialPardonForm Formulaire);
#endif

