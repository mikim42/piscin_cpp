/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 22:35:57 by mikim             #+#    #+#             */
/*   Updated: 2018/01/10 22:38:13 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	private:
		Weapon	*_weapon;
		std::string _name;
	public:
		HumanB(std::string name);
		void	setWeapon(Weapon &weapon);
		void	attack();
		~HumanB();
};

#endif
