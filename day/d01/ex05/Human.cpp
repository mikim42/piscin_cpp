/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 19:43:41 by mikim             #+#    #+#             */
/*   Updated: 2018/01/10 19:49:31 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{

}

std::string	Human::identify() const
{
	std::stringstream ss;

	ss << &(_brain);
	return ss.str();
}

const	Brain &Human::getBrain()
{
	return _brain;
}

Human::~Human()
{

}
