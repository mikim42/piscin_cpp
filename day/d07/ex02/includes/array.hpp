/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 18:24:37 by mikim             #+#    #+#             */
/*   Updated: 2018/01/17 18:45:18 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template<typename T>
class Array
{
	public:
		Array<T>(void)
		{
			_arr = NULL;
			_size = 0;
		}
		Array<T>(unsigned int n)
		{
			_size = n;
			_arr = new T[n];
		}
		Array<T>(Array const &src) { *this = src; }
		Array<T>	&operator=(Array const &rhs)
		{
			_size = rhs._size;
			_arr = new T[_size];
			for (size_t i = 0; i < _size; i++)
				_arr[i] = rhs._arr[i];
		}
		T	&operator[](unsigned int i)
		{
			if (i >= _size)
				throw std::exception();
			return _arr[i];
		}
		~Array<T>(void) {}
		unsigned int	size(void) { return _size; }
		
	private:
		T				*_arr;
		unsigned int	_size;
};

#endif
