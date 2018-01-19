/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 12:01:12 by mikim             #+#    #+#             */
/*   Updated: 2018/01/09 18:06:35 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "Account.class.hpp"

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

int		Account::getNbAccounts(void) { return _nbAccounts; }
int		Account::getTotalAmount( void ) { return _totalAmount; }
int		Account::getNbDeposits( void ) { return _totalNbDeposits; }
int		Account::getNbWithdrawals( void ) { return _totalNbWithdrawals; }
void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts
	<< ";total:" << Account::_totalAmount
	<< ";deposits:" << Account::_totalNbDeposits
	<< ";withdrawals:" << Account::_totalNbWithdrawals
	<< std::endl;
}

Account::Account(int initial_deposit)
{
	_Bonus = 0;
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	Account::_totalAmount += _amount;
	Account::_nbAccounts++;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex
	<< ";amount:" << _amount
	<< ";created" << std::endl;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex
	<< ";amount:" << _amount
	<< ";closed" << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex
	<< ";p_amount:" << _amount
	<< ";deposit:" << deposit;
	_amount += deposit;
	Account::_totalAmount += deposit;
	_nbDeposits++;
	Account::_totalNbDeposits++;
	std::cout << ";amount:" << _amount
	<< ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	if (_amount >= withdrawal)
	{
		std::cout << "index:" << _accountIndex
		<< ";p_amount:" << _amount
		<< ";withdrawal:" << withdrawal;
		_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		std::cout << ";amount:" << _amount
		<< ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return true;
	}
	else
	{
		std::cout << "index:" << _accountIndex
		<< ";p_amount:" << _amount
		<< ";withdrawal:refused" << std::endl;
		return false;
	}
}

int		Account::checkAmount(void) const
{
	_Bonus++;
	std::cout << "Account " << _accountIndex << " has checked amount "
	<< _Bonus << " time(s)."
	<< std::endl;
	return _amount;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
	<< ";amount:" << _amount
	<< ";deposits:" << _nbDeposits
	<< ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void)
{
	std::time_t	time = std::time(0);
	struct tm	*t = localtime(&time);

	std::cout << "["
	<<(t->tm_year + 1900)
	<< std::setw(2) << std::setfill('0') << (t->tm_mon + 1)
	<< std::setw(2) << std::setfill('0') << t->tm_mday << "_"
	<< std::setw(2) << std::setfill('0') << t->tm_hour
	<< std::setw(2) << std::setfill('0') << t->tm_min
	<< std::setw(2) << std::setfill('0') << t->tm_sec << "] ";
}
