/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 01:07:11 by mikim             #+#    #+#             */
/*   Updated: 2018/01/11 17:53:07 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

const int	Fixed::_fracBits = 8;

Fixed::Fixed(void)
{
	_fixed = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
	*this = src;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(int const n)
{
	_fixed = n << _fracBits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const f)
{
	_fixed = roundf(f * (1 << _fracBits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &src)
{
	_fixed = src.getRawBits();
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
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

std::ostream	&operator<<(std::ostream &o, Fixed const &src)
{
	o << src.toFloat();
	return o;
}
