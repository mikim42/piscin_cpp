/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 01:07:11 by mikim             #+#    #+#             */
/*   Updated: 2018/01/11 21:05:34 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <eval_expr.hpp>

const int	Fixed::_fracBits = 8;

Fixed::Fixed(void)
{
	_fixed = 0;
}

Fixed::Fixed(Fixed const &src)
{
	*this = src;
}

Fixed::Fixed(int const n)
{
	_fixed = n << _fracBits;
}

Fixed::Fixed(float const f)
{
	_fixed = roundf(f * (1 << _fracBits));
}

Fixed::~Fixed(void)
{
}

int		Fixed::getRawBits(void) const
{
	return _fixed;
}

void	Fixed::setRawBits(int const raw)
{
	_fixed = raw;
}

int		Fixed::toInt(void) const
{
	return _fixed / (1 << _fracBits);
}

float	Fixed::toFloat(void) const
{
	return _fixed / (float)(1 << _fracBits);
}

Fixed	&Fixed::operator=(Fixed const &src)
{
	_fixed = src.getRawBits();
	return *this;
}
bool	 Fixed::operator>(Fixed const &src)
{
	return _fixed > src.getRawBits();
}

bool	Fixed::operator<(Fixed const &src)
{
	return _fixed < src.getRawBits();
}

bool	Fixed::operator>=(Fixed const &src)
{
	return _fixed >= src.getRawBits();
}

bool	Fixed::operator<=(Fixed const &src)
{
	return _fixed <= src.getRawBits();
}

bool	Fixed::operator==(Fixed const &src)
{
	return _fixed == src.getRawBits();
}

bool	Fixed::operator!=(Fixed const &src)
{
	return _fixed != src.getRawBits();
}

Fixed	Fixed::operator+(Fixed const &src)
{
	return Fixed(toFloat() + src.toFloat());
}

Fixed	Fixed::operator-(Fixed const &src)
{
	return Fixed(toFloat() - src.toFloat());
}

Fixed	Fixed::operator*(Fixed const &src)
{
	return Fixed(toFloat() * src.toFloat());
}

Fixed	Fixed::operator/(Fixed const &src)
{
	return Fixed(toFloat() / src.toFloat());
}

Fixed	&Fixed::operator++(void)
{
	_fixed++;
	return *this;
}

Fixed	&Fixed::operator--(void)
{
	_fixed--;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp = *this;
	++(*this);
	return tmp;
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;
	--(*this);
	return tmp;
}

Fixed	Fixed::max(Fixed const &a, Fixed const &b)
{
	return (a.toFloat() > b.toFloat()) ? a : b;
}

Fixed	Fixed::min(Fixed const &a, Fixed const &b)
{
	return (a.toFloat() > b.toFloat()) ? b : a;
}

std::ostream	&operator<<(std::ostream &o, Fixed const &src)
{
	o << src.toFloat();
	return o;
}
