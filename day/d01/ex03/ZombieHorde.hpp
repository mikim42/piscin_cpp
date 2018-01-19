/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 17:54:25 by mikim             #+#    #+#             */
/*   Updated: 2018/01/10 19:06:16 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <iostream>
# include <string>
# include "Zombie.hpp"

class	ZombieHorde
{
	private:
		Zombie	*_zombies;
		std::string	_type;
		int		_n;

		void		createZombie(void);
		std::string	randomChump(void);
	public:
		ZombieHorde(int n);
		void	announce(void);
		~ZombieHorde(void);
};

#endif
