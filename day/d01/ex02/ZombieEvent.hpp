/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 17:54:25 by mikim             #+#    #+#             */
/*   Updated: 2018/01/10 18:29:34 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <iostream>
# include <string>
# include "Zombie.hpp"

class	ZombieEvent
{
	private:
		std::string	_type;
	public:
		ZombieEvent(void);
		ZombieEvent(std::string zombieType);
		void	setZombieType(std::string zombieType);
		Zombie	*newZombie(std::string name);
		Zombie	*randomChump(void);
		~ZombieEvent();
};

#endif
