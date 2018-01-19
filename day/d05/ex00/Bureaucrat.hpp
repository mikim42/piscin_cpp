/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 12:44:03 by mikim             #+#    #+#             */
/*   Updated: 2018/01/15 15:55:54 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &rhs);
		Bureaucrat	&operator=(Bureaucrat const &rhs);
		~Bureaucrat(void);

		class GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException(void);
				GradeTooLowException(GradeTooLowException const &rhs);
				GradeTooLowException	&operator=(GradeTooLowException const &rhs);
				virtual ~GradeTooLowException(void) throw();

				virtual const char *what() const throw();
		};
		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException(void);
				GradeTooHighException(GradeTooHighException const &rhs);
				GradeTooHighException	&operator=(GradeTooHighException const &rhs);
				virtual ~GradeTooHighException(void) throw();

				virtual const char *what() const throw();
		};

		std::string	getName(void);
		int			getGrade(void);
		void		gradeUp(void);
		void		gradeDown(void);

	private:
		std::string const	_name;
		int					_grade;

};

std::ostream	&operator<<(std::ostream &o, Bureaucrat &rhs);

#endif
