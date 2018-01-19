/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 16:29:00 by mikim             #+#    #+#             */
/*   Updated: 2018/01/17 16:58:24 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <identify.hpp>

void	identify_from_reference(Base &p)
{
	std::cout << "identify from reference: ";
	try
	{
		A &a = dynamic_cast<A&>(p);
		static_cast<void>(a);
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast &bc)
	{
	}
	try
	{
		B &b = dynamic_cast<B&>(p);
		static_cast<void>(b);
		std::cout << "B" << std::endl;
	}
	catch (std::bad_cast &bc)
	{
	}
	try
	{
		C &c = dynamic_cast<C&>(p);
		static_cast<void>(c);
		std::cout << "C" << std::endl;
	}
	catch (std::bad_cast &bc)
	{
	}
}

void	identify_from_pointer(Base *p)
{
	A *a = dynamic_cast<A*>(p);
	B *b = dynamic_cast<B*>(p);
	C *c = dynamic_cast<C*>(p);

	std::cout << "identify from pointer:   ";
	if (a != NULL)
		std::cout << "A" << std::endl;
	if (b != NULL)
		std::cout << "B" << std::endl;
	if (c != NULL)
		std::cout << "C" << std::endl;
}

Base	*generate(void)
{
	std::srand(std::time(NULL));

	Base	*base;
	int		r = rand() % 3;

	if (r == 0)
	{
		std::cout << "random generate:         A" << std::endl;
		base = new A;
	}
	else if (r == 1)
	{
		std::cout << "random generate:         B" << std::endl;
		base = new B;
	}
	else
	{
		std::cout << "random generate:         C" << std::endl;
		base = new C;
	}
	return base;
}

int		main()
{
	Base	*test = generate();
	identify_from_pointer(test);
	identify_from_reference(*test);
}
