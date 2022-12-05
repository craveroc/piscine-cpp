/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:01:30 by molich            #+#    #+#             */
/*   Updated: 2022/09/29 09:35:58 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <sstream>
# include <limits>
# include <iomanip>
# include <cmath>

class Convert
{
	
    protected:
        std::string const base;
		bool nondisplayable;
		char c;
		int in;
		double d;
		float f;
		bool impossible[4];
		
    public:
		Convert(std::string bbase =0);
        Convert(const Convert &tocpy);
        ~Convert();
        Convert &operator=(const Convert &tocpy);
		void nantipe(std::string str);
		char getc() const;
		double getd() const;
		float getf() const;
		int geti() const;
		bool getimpossible(int i) const;
		void printing();
		bool validstring(std::string str);

};


std::ostream &operator<<(std::ostream &out, const Convert &bur);
#endif

