/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 19:24:34 by mikim             #+#    #+#             */
/*   Updated: 2018/01/11 21:32:27 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <eval_expr.hpp>

float	ft_stof(char *&expr)
{
	std::string 		str = expr;
	std::istringstream	iss(str);
	float				tmp;
	int					cnt = 0;

	iss >> tmp;
	while ((*expr >= '0' && *expr <= '9') || *expr == '.')
	{
		if (*expr == '.')	cnt++;
		if (cnt > 1)
		{
			std::cout << "Error" << std::endl;
			exit(0);
		}
		expr++;
	}
	return tmp;
}

float	atom(char *&expr)
{
	float	res;

	while (*expr == ' ')	expr++;
	if (*expr == '(')
	{
		expr++;
		while (*expr == ' ')	expr++;
		res = summands(expr);
		while (*expr == ' ')	expr++;
		if (*expr == ')')	expr++;
		while (*expr == ' ')	expr++;
		return res;
	}
	return ft_stof(expr);
}

float	factor(char *&expr)
{
	Fixed	n1 = Fixed(atom(expr));
	char	op;

	while (*expr)
	{
		while (*expr == ' ')
			expr++;
		op = *expr;

		if (op != '/' && op != '*')	return n1.toFloat();
		expr++;

		Fixed	n2 = Fixed(atom(expr));

		if (op == '*')	n1 = n1 * n2;
		else if (op =='/' && n2.toFloat() == 0)
		{
			std::cout << "Not A Numba" << std::endl;
			exit(0);
		}
		else 			n1 = n1 / n2;
	}
	return (n1.toFloat());
}

float	summands(char *&expr)
{
	Fixed	n1 = Fixed(factor(expr));
	char	op;

	while (*expr)
	{
		while (*expr == ' ')
			expr++;

		op = *expr;
		if (op == '%')
		{
			std::cout << "Floats can't do %" << std::endl;
			exit(0);
		}
		if (op != '-' && op != '+')	return n1.toFloat();
		expr++;

		Fixed	n2 = Fixed(factor(expr));

		if (op == '+')	n1 = n1 + n2;
		else			n1 = n1 - n2;
	}
	return (n1.toFloat());
}

int		main(int ac, char **av)
{
	if (ac != 2)
		return 0;

	float	res = summands(av[1]);
	
	std::cout << res << std::endl;
	return 0;
}
