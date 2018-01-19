/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 17:44:41 by mikim             #+#    #+#             */
/*   Updated: 2018/01/17 17:52:52 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	ft_f(int &elem)
{
	elem *= 2;
}

template<typename T>
void	iter(T *arr, int len, void (*f)(T &))
{
	for (int i = 0; i < len; i++)
		f(arr[i]);
}

int main()
{
	int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	std::cout << "before: ";
	for (int i = 0; i < 9; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;

	iter(arr, 9, ft_f);

	std::cout << "after : ";
	for (int i = 0; i < 9; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}
