/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 13:49:05 by mikim             #+#    #+#             */
/*   Updated: 2018/01/17 15:39:49 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <cmath>
# include <iomanip>
# include <limits>
# include <sstream>
# include <string>
# include <cstdlib>

# define NDE NonDisplayableException
# define IE ImpossibleException

class Convert
{
	public:
		Convert(void);
		Convert(Convert const &src);
		Convert	&operator=(Convert const &rhs);
		~Convert(void);

		char	toChar(long double d);
		int		toInt(long double d);
		float	toFloat(long double d);
		double	toDouble(long double d);

		class NonDisplayableException : public std::exception
		{
			public:
				NDE(void);
				NDE(NDE const &src);
				NDE	&operator=(NDE const &rhs);
				virtual ~NDE(void) throw();

				virtual const char *what() const throw();
		};
		class ImpossibleException : public std::exception
		{
			public:
				IE(void);
				IE(IE const &src);
				IE	&operator=(IE const &rhs);
				virtual ~IE(void) throw ();

				virtual const char *what() const throw();
		};
};

#endif
