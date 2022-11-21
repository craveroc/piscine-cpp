/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:39:59 by ccravero          #+#    #+#             */
/*   Updated: 2022/09/29 09:36:26 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(std::string bbase) : base(bbase)
{
	std::stringstream ss;
	ss<<bbase;
	nondisplayable = false;
	for (int j = 0; j!=4; j++)
		impossible[j]=false;
	if (bbase =="nan" || bbase == "nanf" || bbase == "+inf" ||bbase == "-inf" || bbase == "+inff" ||bbase == "-inff")
	{
		nantipe(base);
		return ; 
	}
	if (base.length()== 1 && (base[0] < '0' || base[0] > '9') )
	{
		c = base[0]; 
		in = static_cast<int>(c);
		d = static_cast<double>(c);
		f = static_cast<float>(c);
	}
	else if (bbase.find('.') == std::string::npos)
	{
		ss >> in;
		d = static_cast<double>(in);
		f = static_cast<float>(in);
		if (in <= 127 && in>=-128)
			c = static_cast<char>(in);
		else
			impossible[0] = 1;
	}
	else if (bbase.find('f') == std::string::npos)
	{
		ss >> d;
		if (std::numeric_limits<char>::max() > d && std::numeric_limits<char>::min() < d)
			c = static_cast<double>(d) ;
		else
			impossible[0]=true;
		if (std::numeric_limits<int>::max() > d && std::numeric_limits<int>::min() < d)
			in = static_cast<int>(d);
		else
			impossible[1]=true;
		if (std::numeric_limits<float>::max() > d && std::numeric_limits<float>::min() < d)
			f = static_cast<float>(d);
		else
			impossible[2]=true;
	}
	else
	{
		ss >> f;
		if (std::numeric_limits<char>::max() > f && std::numeric_limits<char>::min() < f)
			c = static_cast<double>(f) ;
		else
			impossible[0]=true;
		if (std::numeric_limits<int>::max() > f && std::numeric_limits<int>::min() < f)
			in = static_cast<int>(f);
		else
			impossible[1]=true;
		d = static_cast<double>(f);
	}
}

void Convert::nantipe(std::string str)
{
	std::string stat[6] ={"nan", "nanf", "+inf",  "-inf","+inff", "-inff"};
	impossible[0] = true;
	impossible[1] = true;
	int i;
	for (i =0; i<6; i ++)
	{
		if (str == stat[i])
			break;
	}
	switch (i)
	{
	case 0:
		d = nan("");
		f = static_cast<float>(d);
		break;
	case 1:
		f = NAN;
		d = static_cast<double>(f);
		break;
	case 2:
		d = std::numeric_limits<double>::infinity();
		f = static_cast<float>(d);
		break;
	case 3:
		d = -std::numeric_limits<double>::infinity();
		f = static_cast<float>(d);
		break;
	case 4:
		f = std::numeric_limits<float>::infinity();
		d = static_cast<double>(f);
		break;
	case 5:
		f = -std::numeric_limits<float>::infinity();
		d = static_cast<double>(f);
		break;
	default:
		break;
	}
}
Convert::Convert(const Convert &tocpy) : base(tocpy.base)
{
	*this = tocpy;
}

Convert::~Convert()
{
}

Convert &Convert::operator=(const Convert &tocpy)
{
	c = tocpy.c;
	in = tocpy.in;
	f = tocpy.f;
	d = tocpy.d;
	return *this;
}

char Convert::getc() const
{
	return c;
}

double Convert::getd() const
{
	return d;
}
float Convert::getf() const
{
	return f;
}
int Convert::geti() const
{
	return in;
}

bool Convert::getimpossible(int i) const
{
	return impossible[i];
}

std::ostream &operator<<(std::ostream &out, const Convert& bur)
{
	
	out<<"Char is : ";
	if (bur.getimpossible(0))
		out << "impossible\n";
	else if (bur.getc() < 32 || bur.getc() >= 127)
		out<< "non displayable\n";
	else 
		out << bur.getc()<<std::endl;

	out<<"Int is : ";
	if (bur.getimpossible(1))
		out << "impossible\n";
	else 
		out << bur.geti()<<std::endl;

	out<<"Float is : ";
	if (bur.getimpossible(2))
		out << "impossible\n";
	else 
		out <<std::fixed<<std::setprecision (1)<<bur.getf()<<'f'<<std::endl;

	out<<"Double is : ";
	if (bur.getimpossible(3))
		out << "impossible\n";
	else 
		out <<std::fixed<<std::setprecision (1)<< bur.getd()<<std::endl;
	
	return out;
}
