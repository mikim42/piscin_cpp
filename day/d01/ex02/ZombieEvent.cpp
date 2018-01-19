/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 17:54:27 by mikim             #+#    #+#             */
/*   Updated: 2018/01/10 18:30:19 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
	_type = "";
}

ZombieEvent::ZombieEvent(std::string zombieType)
{
	_type = zombieType;
}

void	ZombieEvent::setZombieType(std::string zombieType)
{
	_type = zombieType;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie	*newZombie = new class Zombie(name, _type);

	return (newZombie);
}

Zombie	*ZombieEvent::randomChump(void)
{
	static std::string	ran_set[] = {
		"mikim",
		"tzhou",
		"achan",
		"dcastro-",
		"bbrady",
		"jchow",
		"twalton",
		"jonkim"
	};
	int	r;

	std::srand(std::time(NULL));
	r = rand() % 8;

	Zombie	*newZombie = new class Zombie(ran_set[r], _type);

	return (newZombie);
}

ZombieEvent::~ZombieEvent()
{

}
