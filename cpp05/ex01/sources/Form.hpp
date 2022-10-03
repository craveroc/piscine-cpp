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


#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"
# include <exception>
class Form
{
	
    private:
        std::string const name;
		const int ranktosign;
		const int ranktoexec;
		bool signe;
		
    public:
		Form(std::string nname ="Form", int gradesign = 150, int gradeexec = 150);
        Form(const Form &tocpy);
        virtual ~Form();
        Form &operator=(const Form &tocpy);
		std::string const &getName() const;
		int const &getranktosign() const;
		int const &getranktoexec() const;
		bool const &getsign() const;
		void besigned(Bureaucrat const &sig);

		class GradeTooLowException : public std::exception 
		{
			virtual const char * what() const throw();
		};
		class GradeTooHighException : public std::exception 
		{
			virtual const char* what() const throw();
		};

};


std::ostream &operator<<(std::ostream &out, const Form Formulaire);
#endif

