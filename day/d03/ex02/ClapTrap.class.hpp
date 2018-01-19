/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 16:59:31 by mikim             #+#    #+#             */
/*   Updated: 2018/01/12 17:55:27 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <thread>
# include <chrono>

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(ClapTrap const &rhs);
		~ClapTrap(void);

		ClapTrap	&operator=(ClapTrap const &rhs);

		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		int		checkHp(void);

	protected:
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
