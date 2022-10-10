/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 07:38:54 by ccravero          #+#    #+#             */
/*   Updated: 2022/10/10 19:32:01 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"

int main()
{
	Base *test;
	test = generate();
	//test = new C;
	identify(test);
	identify(*test);
		
}

Base* generate(void)
{
	int i =rand()%3;
	std::cout<<i<<std::endl;
	switch (i)
	{
	case 0:
		return new A;	
	case 1:
		return new B;
	case 2:
		return new C;
	default:
		break;
	}
	return NULL;
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout<<"type A\n";
	else if (dynamic_cast<B*>(p))
		std::cout<<"type B\n";		
	else if (dynamic_cast<C*>(p))
		std::cout<<"type C\n";	
}

void identify(Base& p)
{	
	try
	{
	(void)dynamic_cast<A&>(p);
		std::cout<<"type A\n";
	}
	catch ( ... )
	{
		try
		{
			(void)dynamic_cast<B&>(p);
			std::cout<<"type B\n";
		}
		catch(...)
		{
			try
			{
				(void)dynamic_cast<C&>(p);
				std::cout<<"type C\n";
			}
			catch(...)
			{
			}
			
		}
		
	}
}