/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 22:40:53 by mikim             #+#    #+#             */
/*   Updated: 2018/01/10 22:42:01 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	_type = type;
}

void	Weapon::setType(std::string type)
{
	_type = type;
}

const std::string	Weapon::getType() const
{
	return _type;
}

Weapon::~Weapon()
{

}
