/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationFor.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:39:59 by ccravero          #+#    #+#             */
/*   Updated: 2022/09/29 09:36:26 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationFor::ShrubberyCreationFor(std::string nname , int gradesign , int gradeexec) : name(nname), ranktosign(gradesign), ranktoexec(gradeexec), signe(false)
{
	if (gradesign > 150 || gradeexec > 150) throw GradeTooLowException();
	if (gradesign < 1 || gradeexec < 1) throw GradeTooHighException();
}

ShrubberyCreationFor::ShrubberyCreationFor(const ShrubberyCreationFor &tocpy) : name(tocpy.name), ranktosign(tocpy.ranktosign), ranktoexec(tocpy.ranktoexec), signe(tocpy.signe)
{
}

ShrubberyCreationFor::~ShrubberyCreationFor()
{
}

ShrubberyCreationFor &ShrubberyCreationFor::operator=(const ShrubberyCreationFor &tocpy)
{
	if (this == &tocpy) 
		return *this;
	this->~ShrubberyCreationFor();
	ShrubberyCreationFor* ret = new ShrubberyCreationFor(tocpy);
	return *ret;
}

std::string const &ShrubberyCreationFor::getName() const
{
	return name;
}

int const &ShrubberyCreationFor::getranktosign() const
{
	return ranktosign;
}
int const &ShrubberyCreationFor::getranktoexec() const
{
	return ranktoexec;
}
bool const &ShrubberyCreationFor::getsign() const
{
	return signe;
}

std::ostream &operator<<(std::ostream &out, const ShrubberyCreationFor ShrubberyCreationForulaire)
{
	out << ShrubberyCreationForulaire.getName()<< " ShrubberyCreationFor \ngrade to sign : "<<ShrubberyCreationForulaire.getranktosign()<<"\ngrade to exec :";
	out << ShrubberyCreationForulaire.getranktoexec()<< "\nsigne : "<<ShrubberyCreationForulaire.getsign();
	return out;
}

void ShrubberyCreationFor::besigned(Bureaucrat const &sig)
{
	if(sig.getGrade() > ranktosign) throw GradeTooLowException();
	else
	{
		signe = true;
	}
}

const char* ShrubberyCreationFor::GradeTooLowException::what() const throw()
{
	
	return "grade trop bas";
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "grade trop haut";
}