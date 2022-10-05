/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:39:59 by ccravero          #+#    #+#             */
/*   Updated: 2022/09/29 09:36:26 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string ntarget ) : Form("Shruberry Creation", 145,137), target(ntarget)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &tocpy) : Form(tocpy)
{
	target = tocpy.target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &tocpy)
{
	if (this == &tocpy) 
		return *this;
	this->~ShrubberyCreationForm();
	ShrubberyCreationForm* ret = new ShrubberyCreationForm(tocpy);
	return *ret;
}

void ShrubberyCreationForm::exec() const
{	
	std::string name = target + "_shrubbery";
	std::ofstream out(name.c_str());
	out<<" _ "<<std::endl;
	out<<"/ \\"<<std::endl;
	out<<"\\_/"<<std::endl;
	out<<" |   O"<<std::endl;
	out<<" |   |"<<std::endl;

}

std::ostream &operator<<(std::ostream &out, const ShrubberyCreationForm ShrubberyCreationFormulaire)
{
	out << ShrubberyCreationFormulaire.getName()<< " form \ngrade to sign : "<<ShrubberyCreationFormulaire.getranktosign()<<"\ngrade to exec :";
	out << ShrubberyCreationFormulaire.getranktoexec()<< "\nsigne : "<<ShrubberyCreationFormulaire.getsign();
	return out;
}

/*const char* ShrubberyCreationForm::GradeTooLowException::what() const throw()
{
	
	return "grade trop bas";
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "grade trop haut";
}*/