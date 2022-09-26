/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BSP.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:53:37 by ccravero          #+#    #+#             */
/*   Updated: 2022/09/26 17:06:53 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
int checksign(Fixed coeff, Fixed k,Point const Point);
bool samesign (int a, int b);
bool adroite (Point const a, Point const b, Point const c, Point const point);
bool droiteverticale (Point const a, Point const c, Point const point);

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	if (adroite (a, b, c, point) && adroite(a, c, b, point) && adroite(c, b, a, point))
		return true;
	return false;
}

bool adroite (Point const a, Point const b, Point const c, Point const point)
{
	Fixed k;
	Fixed coef;

	(void)c;
	(void)point;
	if ((b.getx()-a.getx())==0)
	{
		return droiteverticale(a,c,point);
	}
	else 
	{
		coef = (b.gety() - a.gety())/(b.getx() -a.getx());//(yB - yA) /(xB -xA)
	//	std::cout<<a.gety()<< " - "<<coef<<" * "<< a.getx()<< " = " << Fixed(1) - Fixed(0)<<std::endl;
		k = a.gety() - coef * a.getx(); //k = yA-coef * xA
	}
	//std::cout <<"coef : "<< coef <<"\nk = "<<k<<std::endl;
	int signe1 = checksign(coef, k, c);
	int signe2 = checksign(coef, k, point);
	//std::cout<<"signe1 = "<<signe1<<"signe 2 ="<< signe2<<std::endl;

	if (!signe1 || !signe2)
		return false;
	return (samesign(signe1, signe2));
}

int checksign(Fixed coeff, Fixed k, Point const c)
{
	Fixed y;
	
	(void)coeff;
	y = coeff*c.getx() + k;
	//std::cout<<"y :"<<y<<std::endl<<"cy = "<<c.gety()<<std::endl;
	if (y < c.gety())
		return 1;
	if (y > c.gety())
		return -1;
	return 0;
}

bool samesign (int a, int b)
{
	if (a>0 && b>0)
		return true;
	if (a<0 && b<0)
		return true;
	return false;
}

bool droiteverticale (Point const a, Point const c, Point const point)
{
	Fixed mur = a.getx();

	if (c.getx() < mur && point.getx()<mur)
		return true;
	if (c.getx() > mur && point.getx()>mur)
		return true;
	return false;
}