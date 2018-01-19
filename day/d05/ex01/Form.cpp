/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 16:21:36 by mikim             #+#    #+#             */
/*   Updated: 2018/01/15 17:44:21 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) :	_name("Form"),
					_signed(false),
					_reqSign(1),
					_reqExec(1)
{

}

Form::Form(std::string name, int reqSign, int reqExec) :	_name(name),
															_signed(false),
															_reqSign(reqSign),
															_reqExec(reqExec)
{
	if (_reqSign > 150 || _reqExec > 150)
		throw Form::GTLE();
	else if (_reqSign < 1 || _reqExec < 1)
		throw Form::GTHE();
}

Form::Form(Form const &src) :	_reqSign(src._reqSign),
								_reqExec(src._reqExec)
{
	*this = src;
}

Form	&Form::operator=(Form const &rhs)
{
	_signed = rhs._signed;
	return *this;
}

Form::~Form(void)
{

}

std::string	Form::getName(void)
{
	return _name;
}


bool		Form::getSigned(void)
{
	return _signed;
}

int			Form::getReqSign(void)
{
	return _reqSign;
}

int			Form::getReqExec(void)
{
	return _reqExec;
}

void		Form::beSigned(Bureaucrat &src)
{
	if (src.getGrade() > _reqSign)
		throw Form::GTLE();
	else
		_signed = true;
}

//GTHE

Form::GTHE::GTHE(void)
{

}

Form::GTHE::GTHE(Form::GTHE const &src)
{
	*this = src;
}

Form::GTHE	&Form::GTHE::operator=(Form::GTHE const &rhs)
{
	(void)rhs;
	return *this;
}

Form::GTHE::~GTHE(void) throw ()
{

}

const char	*Form::GTHE::what(void) const throw()
{
	return "\x1b[31;1mError: Grade Too High Exception.\x1b[0m\n";
}

//GTLE

Form::GTLE::GTLE(void)
{

}

Form::GTLE::GTLE(Form::GTLE const &src)
{
	(void)src;
}

Form::GTLE	&Form::GTLE::operator=(Form::GTLE const &rhs)
{
	*this = rhs;
}

Form::GTLE::~GTLE(void)
{

}

const char	*Form::GTLE::what(void) const throw()
{
	return "\x1b[31;1mError: Grade Too Low Exception.\x1b[0m\n";
}

//ostream

std::ostream	&operator<<(std::ostream &o, Form &rhs)
{
	o << "\x1b[32;1m"
	<< "< " << rhs.getName() << " >" << " sign form" << std::endl
	<< "< Required grade to sign > " << rhs.getReqSign() << std::endl
	<< "< Required grade to exec > " << rhs.getReqExec() << std::endl;
	if (rhs._signed)
		o << "< Sign status > Signed" << std::endl;
	else
		o << "< Sign status > Not Signed" << std::endl;
}
