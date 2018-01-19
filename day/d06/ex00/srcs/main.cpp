/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 15:06:40 by mikim             #+#    #+#             */
/*   Updated: 2018/01/17 15:58:03 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Convert.hpp>

int		getprec(char *s)
{
	int prec = 1;

	for (int i = 0; s[i]; i++)
	{
		if (s[i] == '.')
		{
			prec = 0;
			for (int j = i + 1; s[j] != '\0'; j++)
				prec++;
			break ;
		}
	}
	return prec;
}

bool	check_valid(char *s)
{
	bool prec = false;
	bool f = false;

	if (strlen(s) == 3 && (s[0] == 'n' || s[0] == 'N') &&
		(s[1] == 'a' || s[1] == 'A') &&	(s[2] == 'n' || s[2] == 'N') && s[3] == '\0')
		return true;
	if (strlen(s) == 3 && (s[0] == 'i' || s[0] == 'I') &&
		(s[1] == 'n' || s[1] == 'N') &&	(s[2] == 'f' || s[2] == 'F') && s[3] == '\0')
		return true;
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '.' && !prec)
			prec = true;
		else if (s[i] == '.' && prec)
			return false;
		if (s[i] == 'f' && !f)
			prec = true;
		else if (s[i] == 'f' && f)
			return false;
		if (!isdigit(s[i]) && s[i] != '.' && s[i] != 'f')
			return false;
	}
	return true;
}

int		main(int ac, char **av)
{
	for (int i = 1; i < ac; i++)
	{
		if (check_valid(av[i]))
		{
			Convert	convert;

			try
			{
				long double ld = strtold(av[i], NULL);
				char c = convert.toChar(ld);
				std::cout << "char: " << "'" << c << "'" << std::endl;
			}
			catch (std::exception &e)
			{
				std::cout << "char: " << e.what() << std::endl;
			}
			try
			{
				long double ld = strtold(av[i], NULL);
				int i = convert.toInt(ld);
				std::cout << "int: " << i << std::endl;
			}
			catch (std::exception &e)
			{
				std::cout << "int: " << e.what() << std::endl;
			}
			try
			{
				long double ld = strtold(av[i], NULL);
				float f = convert.toFloat(ld);
				int prec = getprec(av[i]);
				std::cout << "float: " << std::setprecision(prec) << std::fixed
				<< f << "f" << std::endl;
			}
			catch (std::exception &e)
			{
				std::cout << "float: " << e.what() << std::endl;
			}
			try
			{
				long double ld = strtold(av[i], NULL);
				double d = convert.toDouble(ld);
				int prec = getprec(av[i]);
				std::cout << "double: " << std::setprecision(prec) << std::fixed
				<< d << std::endl;
			}
			catch (std::exception &e)
			{
				std::cout << "double: " << e.what() << std::endl;
			}
		}
		else
			std::cout << "invalid input: " << av[i] << std::endl;
	}
}
