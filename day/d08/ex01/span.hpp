/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 16:08:05 by mikim             #+#    #+#             */
/*   Updated: 2018/01/18 17:12:26 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <cmath>

# define LFE ListFullException
# define NSE NoSpanException

class Span
{
	public:
		Span(void);
		Span(unsigned int n);
		Span(Span const &src);
		Span	&operator=(Span const &rhs);
		~Span(void);
		
		void	addNumber(int n);
		int		shortestSpan();
		int		longestSpan();

		class ListFullException : public std::exception
		{
			public:
				LFE(void);
				LFE(LFE const &src);
				LFE	&operator=(LFE const &rhs);
				virtual ~LFE(void) throw();

				virtual const char *what(void) const throw();
		};
		class NoSpanException : public std::exception
		{
			public:
				NSE(void);
				NSE(NSE const &src);
				NSE	&operator=(NSE const &rhs);
				virtual ~NSE(void) throw();

				virtual const char *what(void) const throw();
		};

	private:
		int				*_arr;
		unsigned int	_size;
		unsigned int	_elem;
};

#endif
