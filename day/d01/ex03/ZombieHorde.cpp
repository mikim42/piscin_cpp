/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 17:54:27 by mikim             #+#    #+#             */
/*   Updated: 2018/01/10 19:22:01 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	_n = n;
	ZombieHorde::createZombie();
	for (int i = 0; i < _n; ++i)
	{
		_zombies[i].init(randomChump(), "42");
		for (int j = 0; j < 1000000000; ++j);
	}
}

void	ZombieHorde::createZombie(void)
{
	_zombies = new Zombie[_n];
	std::cout << "Horde has been created." << std::endl;
}

std::string	ZombieHorde::randomChump(void)
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
	return (ran_set[r]);
}

void	ZombieHorde::announce(void)
{
	for (int i = 0; i < _n; ++i)
		_zombies[i].announce();
}

ZombieHorde::~ZombieHorde(void)
{
	delete [] _zombies;
	std::cout << "Horde has been destoryed." << std::endl;
}
