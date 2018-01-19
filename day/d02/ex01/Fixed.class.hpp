/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 17:33:33 by mikim             #+#    #+#             */
/*   Updated: 2018/01/11 17:52:40 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const &src);
		Fixed(int const n);
		Fixed(float const f);
		~Fixed(void);
		
		Fixed	&operator=(Fixed const &src);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;

	private:
		int					_fixed;
		static const int	_fracBits;
};

std::ostream &operator<<(std::ostream &o, Fixed const &src);

#endif
