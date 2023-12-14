/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 06:11:16 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/12/14 15:01:02 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void iter(T * array, size_t len, void (*f)(T const &)) {
    for (size_t i = 0; i < len; i++) {
        f(array[i]);
    }
}

template <typename T>
void	printArray(T * array, size_t length)
{
	for (size_t i = 0; i < length; i++)
		std::cout << "[" << array[i] << "] ";
	std::cout << std::endl;
}

template <typename T>
void	addOne(T & number)
{
	number += 1;
	return ;
}

#endif
