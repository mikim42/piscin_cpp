/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 22:30:41 by mikim             #+#    #+#             */
/*   Updated: 2018/01/12 14:34:32 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <thread>
# include <chrono>

class FragTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const &rhs);
		FragTrap	&operator=(FragTrap const &rhs);
		~FragTrap(void);

		void	meleeAttack(std::string const &target);
		void	rangedAttack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void	vaulthunter_dot_exe(std::string const &target);
		void	psiBlades(std::string const &target);
		void	warpBlade(std::string const &target);
		void	particleBeam(std::string const &target);
		void	psionicStorm(std::string const &target);
		void	neutronFlare(std::string const &target);

		int		checkHp(void);

	private:
		unsigned int	_hp;
		unsigned int	_maxHp;
		unsigned int	_ep;
		unsigned int	_maxEp;
		unsigned int	_lv;
		std::string		_name;
		unsigned int	_meleeDmg;
		unsigned int	_rangedDmg;
		unsigned int	_armor;
};

#endif
