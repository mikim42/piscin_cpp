/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 15:47:57 by mikim             #+#    #+#             */
/*   Updated: 2018/01/18 16:05:22 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <list>

template<typename T>
int		easyfind(T container, int find)
{
	typename T::iterator	p;

	p = std::find(container.begin(), container.end(), find);
	if (p != container.end())
		return *p;
	else
		throw std::exception();
}

#endif
