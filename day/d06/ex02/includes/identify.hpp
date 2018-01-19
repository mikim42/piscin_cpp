/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 16:28:35 by mikim             #+#    #+#             */
/*   Updated: 2018/01/17 16:55:50 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDENTIFY_HPP
# define IDENTIFY_HPP

# include <iostream>

class Base
{
	public:
		virtual ~Base(void);
};

Base::~Base(void) {}

class A : public Base {};

class B : public Base {};

class C : public Base {};

#endif
