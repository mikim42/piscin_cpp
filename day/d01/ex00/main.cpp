/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 17:01:44 by mikim             #+#    #+#             */
/*   Updated: 2018/01/10 17:37:22 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony	*ponyOnTheHeap(void)
{
	Pony	*Pony_heap = new class Pony("Pony_Heap");

	std::cout << "Pony has been allocated in the heap." << std::endl;
	return (Pony_heap);
}

Pony	ponyOnTheStack(void)
{
	Pony	Pony_stack = Pony("Pony_Stack");

	std::cout << "Pony has been allocated in the stack." << std::endl;
	return (Pony_stack);
}

int		main()
{
	Pony	*heap = ponyOnTheHeap();
	delete heap;

	Pony	stack = ponyOnTheStack();

	return 0;
}
