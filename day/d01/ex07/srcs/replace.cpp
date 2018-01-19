/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 22:57:24 by mikim             #+#    #+#             */
/*   Updated: 2018/01/10 23:12:04 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	replace(std::string f, std::string s1, std::string s2)
{
	std::ifstream ifs(f);
	if (s1.empty() || !ifs)
	{
		std::cout << "Error" << std::endl;
		exit(0);
	}
	std::ofstream ofs((f + ".replace"));
	if (!ofs)
	{
		std::cout << "Error" << std::endl;
		exit(0);
	}

	std::string::size_type	pos;
	std::string				tmp;

	while (std::getline(ifs, tmp))
	{
		size_t st = 0;
		while ((pos = tmp.find(s1, st)) != std::string::npos)
		{
			tmp.erase(pos, s1.length());
			tmp.insert(pos, s2);
			st = pos + s2.length();
		}
		ofs << tmp << std::endl;
	}
}

int main(int argc, char **argv)
{
	std::string f;
	std::string s1;
	std::string s2;
	if (argc != 4)
	{
		std::cout << "Error" << std::endl;
		exit(0);
	}

	f = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	replace(f, s1, s2);
	return (0);
}
