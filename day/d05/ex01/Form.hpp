/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 15:39:18 by mikim             #+#    #+#             */
/*   Updated: 2018/01/15 17:35:33 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

# define GTHE GradeTooHighException
# define GTLE GradeTooLowException

class Form
{
	public:
		Form(void);
		Form(std::string name, int reqSign, int reqExec);
		Form(Form const &src);
		Form	&operator=(Form const &rhs);
		~Form(void);

		class GradeTooHighException : public std::exception
		{
			public:
				GTHE(void);
				GTHE(GTHE const &src);
				GTHE	&operator=(GTHE const &rhs);
				virtual ~GTHE(void) throw();

				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				GTLE(void);
				GTLE(GTLE const &src);
				GTLE	&operator=(GTLE const &rhs);
				virtual ~GTLE(void) throw();

				virtual const char *what() const throw();
		};

		std::string	getName(void);
		bool		getSigned(void);
		int			getReqSign(void);
		int			getReqExec(void);
		void		beSigned(Bureaucrat &src);

	private:
		std::string	const	_name;
		bool				_signed;
		int const			_reqSign;
		int const			_reqExec;
};

std::ostream	&operator<<(std::ostream &o, Form &rhs);

#endif
