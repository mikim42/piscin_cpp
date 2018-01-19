/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 22:30:41 by mikim             #+#    #+#             */
/*   Updated: 2018/01/12 17:46:58 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.class.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const &rhs);
		~FragTrap(void);

		FragTrap	&operator=(FragTrap const &rhs);

		void	meleeAttack(std::string const &target);
		void	rangedAttack(std::string const &target);

		void	vaulthunter_dot_exe(std::string const &target);
		void	psiBlades(std::string const &target);
		void	warpBlade(std::string const &target);
		void	particleBeam(std::string const &target);
		void	psionicStorm(std::string const &target);
		void	neutronFlare(std::string const &target);
};

#endif
