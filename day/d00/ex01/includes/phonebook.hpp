/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 01:46:37 by mikim             #+#    #+#             */
/*   Updated: 2018/01/09 11:21:08 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>

class	Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nick_name;
		std::string	login;
		std::string	addr;
		std::string	email;
		std::string	phone;
		std::string	birthday;
		std::string	fave_meal;
		std::string	underwear;
		std::string	secret;
	public:
		void		add_contact(void);
		void		search_contact(int index);
		void		print_contact(void);
};

void	Contact::add_contact(void)
{
	std::cout << "Hello, my friend!" << std::endl;
	std::cout << "What's your first name?" << std::endl;
	getline(std::cin, first_name);
	std::cout << "What's your last name?" << std::endl;
	getline(std::cin, last_name);
	std::cout << "What's your nick name?" << std::endl;
	getline(std::cin, nick_name);
	std::cout << "What's your login?" << std::endl;
	getline(std::cin, login);
	std::cout << "What's your postal address?" << std::endl;
	getline(std::cin, addr);
	std::cout << "What's your email address?" << std::endl;
	getline(std::cin, email);
	std::cout << "What's your phone number?" << std::endl;
	getline(std::cin, phone);
	std::cout << "When is your birthday?" << std::endl;
	getline(std::cin, birthday);
	std::cout << "What's your favorite meal?" << std::endl;
	getline(std::cin, fave_meal);
	std::cout << "What's your underwear color?" << std::endl;
	getline(std::cin, underwear);
	std::cout << "What's your darkest secret?" << std::endl;
	getline(std::cin, secret);
}

void	Contact::search_contact(int index)
{
	std::cout << "|" << std::setw(10) << index + 1 << "|";
	if (first_name.length() > 10)
		std::cout << std::setw(9) << first_name << ".|";
	else
		std::cout << std::setw(10) << first_name << "|";
	if (last_name.length() > 10)
		std::cout << std::setw(9) << last_name << ".|";
	else
		std::cout << std::setw(10) << last_name << "|";
	if (nick_name.length() > 10)
		std::cout << std::setw(9) << nick_name << ".|";
	else
		std::cout << std::setw(10) << nick_name << "|";
	std::cout << std::endl;
}

void	Contact::print_contact()
{
	std::cout << "First name: " << first_name << std::endl;
	std::cout << "Last name: " << last_name << std::endl;
	std::cout << "Nick name: " << nick_name << std::endl;
	std::cout << "Login: " << login << std::endl;
	std::cout << "Postal address: " << addr << std::endl;
	std::cout << "Email address: " << email << std::endl;
	std::cout << "Phone number: " << phone << std::endl;
	std::cout << "Birthday: " << birthday << std::endl;
	std::cout << "Favorite meal: " << fave_meal << std::endl;
	std::cout << "Underwear color: " << underwear << std::endl;
	std::cout << "Darkest secret: " << secret << std::endl;
}
