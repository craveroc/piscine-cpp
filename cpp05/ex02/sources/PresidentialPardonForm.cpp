/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:39:59 by ccravero          #+#    #+#             */
/*   Updated: 2022/09/29 09:36:26 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string ntarget ) : Form("Robotomy Request", 72, 45), target(ntarget)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &tocpy) : Form(tocpy)
{
	target = tocpy.target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &tocpy)
{
	if (this == &tocpy) 
		return *this;
	this->~PresidentialPardonForm();
	PresidentialPardonForm* ret = new PresidentialPardonForm(tocpy);
	return *ret;
}

void PresidentialPardonForm::exec() const
{	

	std::cout<< target << " est pardonne par Zaphod BeebleBox\n";
	

}

std::ostream &operator<<(std::ostream &out, const PresidentialPardonForm PresidentialPardonFormulaire)
{
	out << PresidentialPardonFormulaire.getName()<< " form \ngrade to sign : "<<PresidentialPardonFormulaire.getranktosign()<<"\ngrade to exec :";
	out << PresidentialPardonFormulaire.getranktoexec()<< "\nsigne : "<<PresidentialPardonFormulaire.getsign();
	return out;
}

/*const char* PresidentialPardonForm::GradeTooLowException::what() const throw()
{
	
	return "grade trop bas";
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "grade trop haut";
}*/