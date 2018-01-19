/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 22:30:41 by mikim             #+#    #+#             */
/*   Updated: 2018/01/12 21:31:07 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.class.hpp"
# include "FragTrap.class.hpp"
# include "ScavTrap.class.hpp"

class NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap(void);
		NinjaTrap(std::string name);
		NinjaTrap(NinjaTrap const &rhs);
		~NinjaTrap(void);

		NinjaTrap	&operator=(NinjaTrap const &rhs);

		void	meleeAttack(std::string const &target);
		void	rangedAttack(std::string const &target);

		void	ninjaShoeBox(ClapTrap &rhs, std::string const &target);
		void	ninjaShoeBox(FragTrap &rhs, std::string const &target);
		void	ninjaShoeBox(ScavTrap &rhs, std::string const &target);
		void	ninjaShoeBox(NinjaTrap &rhs, std::string const &target);
};

#endif
