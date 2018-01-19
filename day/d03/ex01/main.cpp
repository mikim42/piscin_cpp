/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 14:12:22 by mikim             #+#    #+#             */
/*   Updated: 2018/01/12 16:50:33 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.class.hpp"
#include "ScavTrap.class.hpp"

int	main()
{
	system("clear");

	ScavTrap unit("Sargas");
	std::string targets[5] = {
		"Fenix",
		"Zeratul",
		"Tassadar",
		"Artanis",
		"Raszagal"
	};

	for (int i = 0; i < 5; i++)
	{
		std::srand(std::time(NULL));
		int r = (rand() % 50) / 10;
		unit.challengeNewcomer(targets[r]);

		std::this_thread::sleep_for(std::chrono::seconds(2));
		std::cout << std::endl;
	}

	return 0;
}
