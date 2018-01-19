/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 12:38:14 by mikim             #+#    #+#             */
/*   Updated: 2018/01/12 21:37:29 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.class.hpp"

NinjaTrap::NinjaTrap(void)
{
	this->_hp = 60;
	this->_maxHp = 60;
	this->_ep = 120;
	this->_maxEp = 120;
	this->_lv = 1;
	this->_name = "Venatir";
	this->_meleeDmg = 60;
	this->_rangedDmg = 5;
	this->_armor = 0;
	system("afplay sound/summon.mp3 &");
	std::cout << _name << ": Doom to all who threaten the homeworld!" << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(3));
}

NinjaTrap::NinjaTrap(std::string name)
{
	this->_hp = 60;
	this->_maxHp = 60;
	this->_ep = 120;
	this->_maxEp = 120;
	this->_lv = 1;
	this->_name = name;
	this->_meleeDmg = 60;
	this->_rangedDmg = 5;
	this->_armor = 0;
	system("afplay sound/summon.mp3 &");
	std::cout << _name << ": Doom to all who threaten the homeworld!" << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(3));
}

NinjaTrap::NinjaTrap(NinjaTrap const &rhs)
{
	*this = rhs;
	system("afplay sound/summon.mp3 &");
	std::cout << _name << ": Doom to all who threaten the homeworld!" << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(3));
}

NinjaTrap	&NinjaTrap::operator=(NinjaTrap const &rhs)
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

NinjaTrap::~NinjaTrap(void)
{
	system("afplay sound/death.mp3 &");
	std::cout << _name << ": I fear not death!" << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(3));
}

void	NinjaTrap::meleeAttack(std::string const &target)
{
	std::cout << "N1NJ4-TP " << _name << " attacks "
	<< target << " at melee, causing " << _meleeDmg
	<< " points of damage !" << std::endl;
}

void	NinjaTrap::rangedAttack(std::string const &target)
{
	std::cout << "N1N4A-TP " << _name << " attacks "
	<< target << " at ranged, causing " << _rangedDmg
	<< " points of damage !" << std::endl;
}

void	NinjaTrap::ninjaShoeBox(ClapTrap &rhs, std::string const &target)
{
		std::cout << "N1NJ4-TP " << _name << ": Clap-ShoeBoX!" << std::endl;
		std::cout << "SYSTEM: Nothing happened..." << std::endl;
		
		int prevent_compile_error = rhs.checkHp();
		if (target == "prevent compile error ;)")
			return ;
}

void	NinjaTrap::ninjaShoeBox(FragTrap &rhs, std::string const &target)
{
	std::cout << "N1NJ4-TP " << _name << ": Frag-ShoeBoX!" << std::endl;
	rhs.vaulthunter_dot_exe(target);
}

void	NinjaTrap::ninjaShoeBox(ScavTrap &rhs, std::string const &target)
{
	std::cout << "N1NJ4-TP " << _name << ": Scav-ShoeBoX!" << std::endl;
	rhs.challengeNewcomer(target);
}

void	NinjaTrap::ninjaShoeBox(NinjaTrap &rhs, std::string const &target)
{
	std::cout << "N1NJ4-TP " << _name << ": Ninja-ShoeBoX!" << std::endl;

	std::this_thread::sleep_for(std::chrono::seconds(2));
	std::srand(std::time(NULL));
	int	r = (rand() % 20) / 10;

	if (r == 0)			rhs.meleeAttack(target);
	else if (r == 1)	rhs.rangedAttack(target);
}
