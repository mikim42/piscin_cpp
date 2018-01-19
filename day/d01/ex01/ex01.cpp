/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 17:39:51 by mikim             #+#    #+#             */
/*   Updated: 2018/01/10 17:42:06 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	memoryLeak()
{
	std::string	*panthere = new std::string("String panthere");

	std::cout << *panthere << std::endl;
	delete panthere;
}
