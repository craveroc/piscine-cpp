/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:01:30 by molich            #+#    #+#             */
/*   Updated: 2022/09/29 09:35:58 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"
class Form;

class Bureaucrat
{
	
    protected:
        std::string const name;
		int grade;
		
    public:
		Bureaucrat(std::string nname ="Bob", int ngrade = 150);
        Bureaucrat(const Bureaucrat &tocpy);
        virtual ~Bureaucrat();
        Bureaucrat &operator=(const Bureaucrat &tocpy);
		std::string const &getName() const;
		int const &getGrade() const;
		void promote(unsigned int i =1);
		void demote (unsigned int i = 1);
		void signform (Form &form);

		class GradeTooLowException : public std::exception 
		{
			virtual const char* what() const throw();
		};
		class GradeTooHighException : public std::exception 
		{
			virtual const char* what() const throw();
		};

};


std::ostream &operator<<(std::ostream &out, const Bureaucrat bur);
#endif

