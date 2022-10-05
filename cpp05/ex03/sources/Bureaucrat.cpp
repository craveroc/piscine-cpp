/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:39:59 by ccravero          #+#    #+#             */
/*   Updated: 2022/09/29 09:36:26 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string nname , int ngrade ) : name(nname)
{
	if (ngrade > 150 ) throw GradeTooLowException();
	if (ngrade < 1) throw GradeTooHighException();
	grade = ngrade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &tocpy) :name(tocpy.name)
{
	*this = tocpy;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &tocpy)
{
	grade = tocpy.grade;
	return *this;
}

std::string const &Bureaucrat::getName() const
{
	return name;
}

int const &Bureaucrat::getGrade() const
{
	return grade;
}

void Bureaucrat::promote(unsigned int i)
{
	if(grade - i < 1) throw GradeTooHighException();
	grade -=i;
}

void Bureaucrat::demote(unsigned int i)
{
	if (grade + i > 150 ) throw GradeTooLowException();
	grade +=i;
}


std::ostream &operator<<(std::ostream &out, const Bureaucrat bur)
{
	out << bur.getName()<< ", bureaucrat grade "<<bur.getGrade();
	return out;
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	//std::string str = "grade trop bas"
	return "grade trop bas";
}
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	//std::string str = "grade trop haut"
	return "grade trop haut";
}

void Bureaucrat::signform(Form &form)
{
	if(grade <= form.getranktosign())
	{
		std::cout<<*this<< "signed "<< form.getName()<<std::endl;
		form.besigned(*this);
	}
	std::cout<<*this<< "could not sign "<< form.getName()<<"because his rank is too low"<<std::endl;
}

void  Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout<<name<<" a execute "<<form.getName()<<std::endl;
	}
	catch(std::exception & e)
	{
		std::cout<<"echec de l'execution de "<<form.getName()<<" parce que "<<e.what()<<std::endl;
	}
}