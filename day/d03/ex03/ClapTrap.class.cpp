/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 17:11:26 by mikim             #+#    #+#             */
/*   Updated: 2018/01/12 21:35:42 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"

ClapTrap::ClapTrap(void)
{
	system("afplay sound/summon_2.mp3 &");
	std::cout << "Protoss: I long for combat!" << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(3));
}

ClapTrap::ClapTrap(ClapTrap const &rhs)
{
	*this = rhs;
	system("afplay sound/summon.mp3 &");
	std::cout << _name << ": I long for combat!" << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(3));
}

ClapTrap::~ClapTrap(void)
{
	system("afplay sound/death.mp3 &");
	std::cout << "Protoss: All for the Empire!" << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(3));
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
{
	_hp = rhs._hp;
	_maxHp = rhs._maxHp;
	_ep = rhs._ep;
	_maxEp = rhs._maxEp;
	_lv = rhs._lv;
	_name = rhs._name;
	_meleeDmg = rhs._meleeDmg;
	_rangedDmg = rhs._meleeDmg;
	_armor = rhs._armor;
	return *this;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::srand(std::time(NULL));
	int r = (rand() % 29) / 10;
	if (r == 0)			system("afplay sound/hit_1.mp3 &");
	else if (r == 1)	system("afplay sound/hit_2.mp3 &");
	else if (r == 2)	system("afplay sound/hit_3.mp3 &");

	if (amount < _armor)	amount = 0;
	else					amount -= _armor;
	std::cout << "SYSTEM: " << amount << " damage to "
	<< _name << std::endl;
	std::cout << "SYSTEM: " << _name << "'s HP: "
	<< _hp << " -> ";
	if (amount >= _hp)	_hp = 0;
	else				_hp -= amount;
	std::cout << _hp << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(2));
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	system("afplay sound/repair.mp3 &");
	std::cout << "SYSTEM: " << _name << " repaired!" << std::endl;
	std::cout << "SYSTEM: " << _name << "'s HP: " << _hp << " -> ";
	_hp += amount;
	if (_hp > _maxHp)	_hp = _maxHp;
	std::cout << _hp << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(3));
}

int		ClapTrap::checkHp(void)
{
	return _hp;
}
