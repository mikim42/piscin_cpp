/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 19:38:36 by mikim             #+#    #+#             */
/*   Updated: 2018/01/10 19:45:52 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{

}

std::string	Brain::identify() const
{
	std::stringstream ss;
	
	ss << this;
	return ss.str();
}

Brain::~Brain()
{

}
