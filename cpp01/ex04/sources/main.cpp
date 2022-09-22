/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:20:16 by ccravero          #+#    #+#             */
/*   Updated: 2022/09/22 14:13:37 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string getall(std::string filename);
std::string dooutstring(std::string filename, std::string s1, std::string s2);

int main(int argc, char**argv)
{
	if (argc !=4)
		return 0;
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string outfilename = argv[1];
	outfilename+= ".replace";
	std::ofstream outfile(outfilename.c_str());
	outfile<<dooutstring(argv[1], s1, s2);
	
}

std::string getall(std::string filename)
{
	std::ifstream file(filename.c_str());
	std::string res;
	char c;
	while(file.get(c))
		res+=c;		
	return res;
}

std::string dooutstring(std::string filename, std::string s1, std::string s2)
{
	std::string outstring;
	unsigned long index;
	outstring = getall(filename);
	
	index = outstring.find(s1, 0);
	while(index != std::string::npos)
	{
		outstring.erase(index,s1.size());
		outstring.insert(index, s2);
		index = outstring.find(s1, index+s2.size());
	}
	return outstring;
}