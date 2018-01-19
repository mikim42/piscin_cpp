/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 01:07:23 by mikim             #+#    #+#             */
/*   Updated: 2018/01/11 17:03:30 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const &src);
		~Fixed(void);

		Fixed	&operator=(Fixed const &src);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int					_fixed;
		static const int	_fracBits;
};

#endif
