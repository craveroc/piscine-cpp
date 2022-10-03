/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:01:30 by molich            #+#    #+#             */
/*   Updated: 2022/09/29 09:35:58 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ShrubberyCreationForm_HPP
# define ShrubberyCreationForm_HPP

# include <iostream>
# include "Bureaucrat.hpp"
# include <exception>
class Bureaucrat;

class ShrubberyCreationForm
{
	
    private:
        std::string target;
		
    public:
		ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm &tocpy);
        virtual ~ShrubberyCreationForm();
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &tocpy);
		std::string const &getName() const;
		int const &getranktosign() const;
		int const &getranktoexec() const;
		bool const &getsign() const;
		void besigned(Bureaucrat const &sig);
		virtual void exec()=0;

		class GradeTooLowException : public std::exception 
		{
			virtual const char * what() const throw();
		};
		class GradeTooHighException : public std::exception 
		{
			virtual const char* what() const throw();
		};

};


std::ostream &operator<<(std::ostream &out, ShrubberyCreationForm Formulaire);
#endif

