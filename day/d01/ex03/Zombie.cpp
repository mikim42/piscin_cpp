/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 17:46:08 by mikim             #+#    #+#             */
/*   Updated: 2018/01/10 19:20:20 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

void	Zombie::init(std::string name, std::string type)
{
	_name = name;
	_type = type;
	std::cout << "!!!" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << "<" << _name << " (" << _type << ")> "
	<< "Braiiiiiiinnnssss..." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "<" << _name << " (" << _type << ")> "
	<< "has been gone....." << std::endl;
}
