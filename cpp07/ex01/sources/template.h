/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:40:27 by ccravero          #+#    #+#             */
/*   Updated: 2022/10/11 14:30:11 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_H
# define TEMPLATE_H

# include <iostream>

template < typename T >
void print(T const &x);
template < typename T >
void iter(T *array, size_t len, void (*f)(T const &));
#endif