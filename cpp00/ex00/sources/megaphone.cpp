/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molich <molich@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 13:32:29 by molich            #+#    #+#             */
/*   Updated: 2022/09/20 17:23:10 by molich           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
 
 char putmaj(char car);
 
int main (int argc, char **argv)
{
    if (argc == 1)
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else 
    {
        for (int i = 1; i < argc; i++)
        {
            for (size_t j = 0; argv[i][j] ; j++)
            {
                std::cout<<putmaj(argv[i][j]);
            }
            std::cout<<" ";
        }
    }
    std::cout<<std::endl;
    return (0); 
}

char putmaj(char car)
{
    if (car >= 'a' && car <= 'z')
        car -=32;
    return car; 
}