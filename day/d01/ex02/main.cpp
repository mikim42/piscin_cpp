/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 18:09:58 by mikim             #+#    #+#             */
/*   Updated: 2018/01/10 18:27:02 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int	main(void)
{
	ZombieEvent e1 = ZombieEvent();
	ZombieEvent e2 = ZombieEvent();

	e1.setZombieType("Picky");
	e2.setZombieType("Hater");

	Zombie *z1 = e1.newZombie("Moulinette");
	z1->announce();
	for (int i = 0; i < 1000000000; i++);
	std::cout << std::endl;
	delete z1;

	for (int i = 0; i < 1000000000; i++);
	std::cout << std::endl;

	Zombie *z2 = e2.newZombie("Norminette");
	z2->announce();
	for (int i = 0; i < 1000000000; i++);
	std::cout << std::endl;
	delete z2;

	for (int i = 0; i < 1000000000; i++);
	std::cout << std::endl;

	ZombieEvent e3 = ZombieEvent();
	ZombieEvent e4 = ZombieEvent();

	e3.setZombieType("Altruist");
	e4.setZombieType("Cheater");
	
	Zombie *z3 = e3.randomChump();
	z3->announce();
	for (int i = 0; i < 1000000000; i++);
	std::cout << std::endl;
	delete z3;

	for (int i = 0; i < 1000000000; i++);
	std::cout << std::endl;

	Zombie *z4 = e4.randomChump();
	z4->announce();
	for (int i = 0; i < 1000000000; i++);
	std::cout << std::endl;
	delete z4;

	return (0);
}
