/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 15:08:47 by mikim             #+#    #+#             */
/*   Updated: 2018/01/12 17:46:56 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.class.hpp"

class ScavTrap : ClapTrap
{
	public:
		ScavTrap(void); 
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &rhs);
		~ScavTrap(void);

		ScavTrap	&operator=(ScavTrap const &rhs);

		void	meleeAttack(std::string const &target);
		void	rangedAttack(std::string const &target);

		void	challengeNewcomer(std::string const &target);
		void	challenge1(std::string const &target);
		void	challenge2(std::string const &target);
		void	challenge3(std::string const &target);
		void	challenge4(std::string const &target);
		void	challenge5(std::string const &target);
};

#endif
