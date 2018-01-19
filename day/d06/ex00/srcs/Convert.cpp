/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 14:15:52 by mikim             #+#    #+#             */
/*   Updated: 2018/01/17 15:38:35 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Convert.hpp>

// Convert

Convert::Convert(void) {}

Convert::Convert(Convert const &src) { *this = src; }

Convert	&Convert::operator=(Convert const &rhs)
{
	(void)rhs;
	return *this;
}

Convert::~Convert(void) {}

char	Convert::toChar(long double ld)
{
	char c;

	if (isinf(ld) || isnan(ld))
		throw Convert::IE();
	c = static_cast<char>(ld);
	if (std::isprint(c))
		return c;
	else
		throw Convert::NDE();
}

int	Convert::toInt(long double ld)
{
	int i;

	if (isinf(ld) || isnan(ld))
		throw Convert::IE();
	if (ld > static_cast<long double>(INT_MAX) ||
		ld < static_cast<long double>(INT_MIN))
		throw Convert::IE();
	i = static_cast<int>(ld);
	return i;
}

float	Convert::toFloat(long double ld)
{
	float f;

	f = static_cast<float>(ld);
	return f;
}

double	Convert::toDouble(long double ld)
{
	double	r;

	r = static_cast<double>(ld);
	return r;
}

//	NDE

Convert::NDE::NDE(void) {}

Convert::NDE::NDE(Convert::NDE const &src) { *this = src; }

Convert::NDE	&Convert::NDE::operator=(Convert::NDE const &rhs)
{
	(void)rhs;
	return *this;
}

Convert::NDE::~NDE(void) throw() {}

const char	*Convert::NDE::what(void) const throw ()
{
	return "Non displayable";
}

// IE

Convert::IE::IE(void) {}

Convert::IE::IE(Convert::IE const &src) { *this = src; }

Convert::IE	&Convert::IE::operator=(Convert::IE const &rhs)
{
	(void)rhs;
	return *this;
}

Convert::IE::~IE(void) throw() {}

const char	*Convert::IE::what(void) const throw ()
{
	return "impossible";
}
