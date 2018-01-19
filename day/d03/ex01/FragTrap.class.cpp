/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 12:38:14 by mikim             #+#    #+#             */
/*   Updated: 2018/01/12 15:57:38 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.class.hpp"

FragTrap::FragTrap(void) :	_hp(100),
							_maxHp(100),
							_ep(100),
							_maxEp(100),
							_lv(1),
							_meleeDmg(30),
							_rangedDmg(20),
							_armor(5)
{
	_name = "Ara";
	system("afplay sound/summon.mp3 &");
	std::cout << _name << ": Issah'tu!" << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(3));
}

FragTrap::FragTrap(std::string name) :	_hp(100),
										_maxHp(100),
										_ep(100),
										_maxEp(100),
										_lv(1),
										_name(name),
										_meleeDmg(30),
										_rangedDmg(20),
										_armor(5)
{
	system("afplay sound/summon.mp3 &");
	std::cout << _name << ": Issah'tu!" << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(3));
}

FragTrap::FragTrap(FragTrap const &rhs)
{
	*this = rhs;
	system("afplay sound/summon.mp3 &");
	std::cout << _name << ": Issah'tu!" << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(3));
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
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

FragTrap::~FragTrap(void)
{
	system("afplay sound/death.mp3 &");
	std::cout << _name << ": Honor guide me!" << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(3));
}

void	FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << _name << " attacks "
	<< target << " at melee, causing " << _meleeDmg
	<< " points of damage !" << std::endl;
}

void	FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << _name << " attacks "
	<< target << " at ranged, causing " << _rangedDmg
	<< " points of damage !" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
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

void	FragTrap::beRepaired(unsigned int amount)
{
	system("afplay sound/repair.mp3 &");
	std::cout << "SYSTEM: " << _name << " repaired!" << std::endl;
	std::cout << "SYSTEM: " << _name << "'s HP: " << _hp << " -> ";
	_hp += amount;
	if (_hp > _maxHp)	_hp = _maxHp;
	std::cout << _hp << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(3));
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	void	(FragTrap::*Attacks[5])(std::string const &target) = {
		&FragTrap::psiBlades,
		&FragTrap::warpBlade,
		&FragTrap::particleBeam,
		&FragTrap::psionicStorm,
		&FragTrap::neutronFlare
	};

	std::srand(std::time(NULL));
	int	o_r = (rand() % 20) / 10;
	if (o_r == 0)		system("afplay sound/order_1.mp3 &");
	else if (o_r == 1)	system("afplay sound/order_2.mp3 &");
	std::cout << _name << ": Khas I serve!" << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(2));
	std::srand(std::time(NULL));

	if (_ep >= 25)
	{
		int	r = (rand() % 50) / 10;
		(this->*Attacks[r])(target);
		std::cout << "SYSTEM: " << _name << "'s EP: " << _ep;
		_ep -= 25;
		std::cout << " -> " << _ep << std::endl;
	}
	else
	{
		system("afplay sound/oom.mp3 &");
		std::cout << "SYSTEM: Not enough energy!" << std::endl;
		std::cout << "SYSTEM: " << _name << " recovered enegy" << std::endl;
		std::cout << "SYSTEM: " << _name << "'s EP: " << _ep << " -> ";
		std::srand(std::time(NULL));
		int	e_r = rand() % 20;
		e_r += 10;
		_ep += e_r;
		std::cout << _ep << std::endl;
		
	}
}

void	FragTrap::psiBlades(std::string const &target)
{
	system("afplay sound/psi_blades.mp3 &");
	std::cout << "Psi Blades!" << std::endl;
	meleeAttack(target);
	std::this_thread::sleep_for(std::chrono::seconds(2));
}

void	FragTrap::warpBlade(std::string const &target)
{
	system("afplay sound/warp_blade.mp3 &");
	std::cout << "Warp Blade!" << std::endl;
	meleeAttack(target);
	std::this_thread::sleep_for(std::chrono::seconds(2));
}

void	FragTrap::particleBeam(std::string const &target)
{
	system("afplay sound/particle_beam.mp3 &");
	std::cout << "Particle Beam!" << std::endl;
	rangedAttack(target);
	std::this_thread::sleep_for(std::chrono::seconds(2));
}

void	FragTrap::psionicStorm(std::string const &target)
{
	system("afplay sound/psionic_storm.mp3 &");
	std::cout << "Psionic Storm!" << std::endl;
	rangedAttack(target);
	std::this_thread::sleep_for(std::chrono::seconds(4));
}

void	FragTrap::neutronFlare(std::string const &target)
{
	system("afplay sound/neutron_flare.mp3 &");
	std::cout << "Neutron Flare!" << std::endl;
	rangedAttack(target);
	std::this_thread::sleep_for(std::chrono::seconds(2));
}

int		FragTrap::checkHp(void)
{
	return _hp;
}
