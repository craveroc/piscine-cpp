/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:39:59 by ccravero          #+#    #+#             */
/*   Updated: 2022/09/29 09:36:26 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string ntarget ) : Form("Robotomy Request", 72, 45), target(ntarget)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &tocpy) : Form(tocpy)
{
	target = tocpy.target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &tocpy)
{
	if (this == &tocpy) 
		return *this;
	this->~RobotomyRequestForm();
	RobotomyRequestForm* ret = new RobotomyRequestForm(tocpy);
	return *ret;
}

void RobotomyRequestForm::exec() const
{	
	std::cout<<"BZZZ BOUM....\n";
	if (rand()%2)
		std::cout<<"echec de la robotisation de "<< target<<std::endl;
	else 
		std::cout<<"operation termine avec succes " << target << " est maintenant un robot\n";
	

}

std::ostream &operator<<(std::ostream &out, const RobotomyRequestForm RobotomyRequestFormulaire)
{
	out << RobotomyRequestFormulaire.getName()<< " form \ngrade to sign : "<<RobotomyRequestFormulaire.getranktosign()<<"\ngrade to exec :";
	out << RobotomyRequestFormulaire.getranktoexec()<< "\nsigne : "<<RobotomyRequestFormulaire.getsign();
	return out;
}

/*const char* RobotomyRequestForm::GradeTooLowException::what() const throw()
{
	
	return "grade trop bas";
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "grade trop haut";
}*/