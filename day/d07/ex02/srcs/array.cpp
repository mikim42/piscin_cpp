/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 18:20:20 by mikim             #+#    #+#             */
/*   Updated: 2018/01/17 18:46:42 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <array.hpp>

int	main()
{
	unsigned int n = 10;
	Array<std::string> test(n);

	try
	{
		for (unsigned int i = 0; i < test.size(); i++)
			test[i] = "hello";
		for (unsigned int i = 0; i < test.size(); i++)
			std::cout << test[i] << " ";
		std::cout << std::endl;
		std::cout << test[10] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
