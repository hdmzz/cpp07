/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 06:24:13 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/12/09 10:38:53 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template<typename T = int>
class Array
{
private:
    T * _array;
    unsigned int _size;
public:
    Array() : _array(NULL), _size(0) {}
    Array(unsigned int n) : _array(new T[n]), _size(n) {}
    Array(Array const & src) : _array(new T[src._size]), _size(src._size) {
        for (unsigned int i = 0; i < src._size; i++) {
            _array[i] = src._array[i];
        }
    }
    ~Array() {
        delete [] _array;
    }

    class OutOfBoundsExeception : public std::exception {
        public:
            virtual char const * what() const throw() {
                return ("Index is out of bounds");
            }
    };

    Array & operator=(Array const & rhv) {
        if (this == &rhv)
            return (*this);
        if (this->_size != rhv._size) {
            delete [] _array;
            _size = rhv._size;
            _array = new T[rhv._size];
        }
        for (size_t i = 0; i < rhv._size; i++) {
            _array[i] = rhv._array[i];
        }
        return (*this);
    }    

    T & operator[](unsigned int index) {
        if (index >= this->_size)
            throw (OutOfBoundsExeception());
        return (this->_array[index]);
    }

    unsigned int size() const {
        return (_size);
    }
};



#endif
