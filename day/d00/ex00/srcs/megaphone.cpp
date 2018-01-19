/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 21:52:36 by mikim             #+#    #+#             */
/*   Updated: 2018/01/08 22:20:43 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <locale>

int		main(int ac, char **av)
{
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < ac; i++)
	{
		std::string	tmp = av[i];
		std::locale	loc;

		for (std::string::size_type j = 0; j < tmp.length(); j++)
			std::cout << std::toupper(tmp[j], loc);
	}
	std::cout << std::endl;
	return 0;
}
