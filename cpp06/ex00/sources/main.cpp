/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 07:38:54 by ccravero          #+#    #+#             */
/*   Updated: 2022/12/01 13:00:38 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <climits>
#include "Convert.hpp"


int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	std::string	str;
	if (argc != 2)
		return (0);
	str = argv[1];
	Convert test(str);
	std::cout<<test;
	//std::numeric_limits<double>::infinity();*/
 
}
