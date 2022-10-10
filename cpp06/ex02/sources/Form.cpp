/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:39:59 by ccravero          #+#    #+#             */
/*   Updated: 2022/09/29 09:36:26 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string nname , int gradesign , int gradeexec) : name(nname), ranktosign(gradesign), ranktoexec(gradeexec), signe(false)
{
	if (gradesign > 150 || gradeexec > 150) throw GradeTooLowException();
	if (gradesign < 1 || gradeexec < 1) throw GradeTooHighException();
}

Form::Form(const Form &tocpy) : name(tocpy.name), ranktosign(tocpy.ranktosign), ranktoexec(tocpy.ranktoexec), signe(tocpy.signe)
{
}

Form::~Form()
{
}

Form &Form::operator=(const Form &tocpy)
{
	if (this == &tocpy) 
		return *this;
	//this->~Form();
	//Form* ret = new Form(tocpy);
	std::string& str =  const_cast<std::string&>(name);
	str = tocpy.getName();
	int &a =const_cast<int&>(ranktosign);
	a = tocpy.ranktosign;
	int &b =const_cast<int&>(ranktoexec);
	b = tocpy.ranktoexec;
	signe = tocpy.signe;
	
	return *this;
}

std::string const &Form::getName() const
{
	return name;
}

int const &Form::getranktosign() const
{
	return ranktosign;
}
int const &Form::getranktoexec() const
{
	return ranktoexec;
}
bool const &Form::getsign() const
{
	return signe;
}

std::ostream &operator<<(std::ostream &out, const Form &formulaire)
{
	out << formulaire.getName()<< " Form \ngrade to sign : "<<formulaire.getranktosign()<<"\ngrade to exec :";
	out << formulaire.getranktoexec()<< "\nsigne : "<<formulaire.getsign();
	return out;
}

void Form::besigned(Bureaucrat const &sig)
{
	if(sig.getGrade() > ranktosign) throw GradeTooLowException();
	else
	{
		signe = true;
	}
}

const char* Form::GradeTooLowException::what() const throw()
{
	
	return "grade trop bas";
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "grade trop haut";
}
const char* Form::NotSignedException::what() const throw()
{
	return "formulaire non signe";
}
void Form::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > ranktoexec) throw GradeTooLowException();
	if (signe == false ) throw NotSignedException();
	exec();
}
