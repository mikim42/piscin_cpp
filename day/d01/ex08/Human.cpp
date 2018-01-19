/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 23:18:00 by mikim             #+#    #+#             */
/*   Updated: 2018/01/10 23:26:52 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void Human::meleeAttack(std::string const &target)
{
	std::cout << "ACTION: meleeAttack; TARGET: " << target << std::endl;
}

void Human::rangedAttack(std::string const &target)
{
	std::cout << "ACTION: rangedAttack; TARGET: " << target << std::endl;
}

void Human::intimidatingShout(std::string const &target)
{
	std::cout << "ACTION:intimidatingShout; TARGET: " << target << std::endl;
}

void Human::action(std::string const &action_name, std::string const &target)
{
	void (Human::*actions[3])(std::string const &target) =
	{
		&Human::meleeAttack,
		&Human::rangedAttack,
		&Human::intimidatingShout
	};

	const std::string action_list[] =
	{
		"meleeAttack",
		"rangedAttack",
		"intimidatingShout"
	};

	for (int i = 0; i < 3; i++)
	{
		if (action_list[i].compare(action_name) == 0)
			(this->*actions[i])(target);
	}
}
