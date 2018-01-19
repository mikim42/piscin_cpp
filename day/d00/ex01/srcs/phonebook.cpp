/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 01:46:37 by mikim             #+#    #+#             */
/*   Updated: 2018/01/09 18:59:05 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <phonebook.hpp>

int		main()
{
	Contact	contact[8];
	int		index = 0;

	while (true)
	{
		std::string	command;

		std::cout << "[1] ADD" << std::endl;
		std::cout << "[2] SEARCH" << std::endl;
		std::cout << "[3] EXIT" << std::endl;
		getline(std::cin, command);
		if (command == "ADD" || command == "1")
		{
			if (index < 8)
			{
				contact[index].add_contact();
				index++;
			}
			else
				std::cout << "Your phonebook is full." << std::endl;
		}
		else if (command == "SEARCH" || command == "2")
		{
			std::cout << "|-------------------------------------------|\n";
			std::cout << "|     INDEX|FIRST NAME| LAST NAME| NICK NAME|\n";
			std::cout << "|-------------------------------------------|\n";
			for (int i = 0; i < index; i++)
				contact[i].search_contact(i);
			std::cout << "|-------------------------------------------|\n";
			if (index == 0)
			{
				std::cout << "Your phonebook is empty." << std::endl;
				break ;
			}
			while (true)
			{
				int n = -1;

				std::cout << "[0] BACK" << std::endl;
				std::cout << "For more details enter [index]"
				<< std::endl;
				std::cin >> n;
				if (!std::cin.fail() && n == 0)
				{
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					break ;
				}
				if (n - 1 >= 0 && n <= index)
				{
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					contact[n - 1].print_contact();
					break ;
				}
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "Please try again." << std::endl;
			}
		}
		else if (command == "EXIT" || command == "3" || std::cin.eof())
		{
			std::cout << "Bye Bye" << std::endl;
			exit(0);
		}
		else
			std::cout << "Wrong input. Please try again." << std::endl;
	}
	return (0);
	}
