/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 14:12:22 by mikim             #+#    #+#             */
/*   Updated: 2018/01/12 15:59:25 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.class.hpp"

int	main()
{
	system("clear");

	FragTrap unit("Ara");
	std::string targets[5] = {
		"Zergling",
		"Hydralisk",
		"Ultralisk",
		"Lurker",
		"Defiler"
	};

	while (unit.checkHp() > 0)
	{
		std::srand(std::time(NULL));
		int t_r = rand() % 5;
		unit.vaulthunter_dot_exe(targets[t_r]);

		std::this_thread::sleep_for(std::chrono::seconds(2));
		std::cout << std::endl;

		std::srand(std::time(NULL));
		int d_r = rand() % 20;
		d_r += 10;
		unit.takeDamage(d_r);

		std::this_thread::sleep_for(std::chrono::seconds(2));
		std::cout << std::endl;

		std::srand(std::time(NULL));
		int r_r = rand() % 5;
		r_r += 5;
		if (unit.checkHp() > 0)	unit.beRepaired(r_r);

		std::this_thread::sleep_for(std::chrono::seconds(2));
		std::cout << std::endl;
	}
	return 0;
}
