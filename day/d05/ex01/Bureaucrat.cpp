/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 13:16:47 by mikim             #+#    #+#             */
/*   Updated: 2018/01/15 17:27:53 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{

}

Bureaucrat::Bureaucrat(std::string name, int grade) :	_name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &rhs)
{
	*this = rhs;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &rhs)
{
	_grade = rhs._grade;
	return *this;
}

Bureaucrat::~Bureaucrat(void)
{

}

std::string	Bureaucrat::getName(void)
{
	return _name;
}

int			Bureaucrat::getGrade(void)
{
	return _grade;
}

void		Bureaucrat::gradeUp(void)
{
	if (_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade--;
}

void		Bureaucrat::gradeDown(void)
{
	if (_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade++;
}

void		Bureaucrat::signForm(Form &src)
{
	try
	{
		src.beSigned(*this);
		std::cout << "< Bureaucrat: " << _name << " >" << " signs "
		<< "< Form: " << src.getName() << " >";
	}
	catch (Form::GTHE &e)
	{
		std::cout << "< Bureaucrat: " << _name << " >" << " cannot sign "
		<< "< Form: " << src.getName() << " >" << std::endl;
		std::cout << "Because < " << e.what() << " >";
	}
	catch (std::exception &e)
	{
		std::cout << "Unexpected Error: " << e.what() << std::endl;
	}
}

//GradeTooLowException

Bureaucrat::GradeTooLowException::GradeTooLowException(void)
{

}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const &rhs)
{
	*this = rhs;
}

Bureaucrat::GradeTooLowException	
&Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const &rhs)
{
	(void)rhs;
	return *this;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw()
{

}

const char	*Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return "\x1b[31;1mError: Grade Too Low Exception.\x1b[0m";
}

//GradeTooHighException

Bureaucrat::GradeTooHighException::GradeTooHighException(void)
{

}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const &rhs)
{
	*this = rhs;
}

Bureaucrat::GradeTooHighException	
&Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const &rhs)
{
	(void)rhs;
	return *this;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw()
{

}

const char	*Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return "\x1b[31;1mError: Grade Too High Exception.\x1b[0m";
}

//ostream

std::ostream	&operator<<(std::ostream &o, Bureaucrat &rhs)
{
	o << "\x1b[32;1m";
	o << "< " << rhs.getName() << " >" << " bureaucrat grade < " << rhs.getGrade() << " >";
	o << "\x1b[0m";
	return o;
}
