/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 19:41:30 by mikim             #+#    #+#             */
/*   Updated: 2018/01/10 19:46:21 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include <string>
#include <sstream>
#include "Brain.hpp"

class Human
{
	private:
		const Brain _brain;
	public:
		Human();
		const Brain &getBrain();
		std::string identify() const;
		~Human();
};

#endif
