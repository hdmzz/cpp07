/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 06:11:16 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/12/15 13:53:08 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T, typename F>
void iter(T * array, size_t len, F function) {
    for (size_t i = 0; i < len; i++) {
        function(array[i]);
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
