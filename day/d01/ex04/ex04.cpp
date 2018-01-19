/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 19:32:16 by mikim             #+#    #+#             */
/*   Updated: 2018/01/10 19:33:43 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string s = "HI THIS IS BRAIN";

	std::string *p = &s;
	std::string &r = s;

	std::cout << "String: " << s << std::endl;
	std::cout << "Pointer: " << *p << std::endl;
	std::cout << "Reference: " << r << std::endl;
	return (0);
}
