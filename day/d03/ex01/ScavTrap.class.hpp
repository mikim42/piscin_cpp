/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 15:08:47 by mikim             #+#    #+#             */
/*   Updated: 2018/01/12 16:42:31 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "FragTrap.class.hpp"

class ScavTrap
{
	public:
		ScavTrap(void); 
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &rhs);
		~ScavTrap(void);

		ScavTrap	&operator=(ScavTrap const &rhs);

		void	meleeAttack(std::string const &target);
		void	rangedAttack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void	challengeNewcomer(std::string const &target);
		void	challenge1(std::string const &target);
		void	challenge2(std::string const &target);
		void	challenge3(std::string const &target);
		void	challenge4(std::string const &target);
		void	challenge5(std::string const &target);

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
