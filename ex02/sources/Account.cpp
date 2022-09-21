/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccravero <ccravero@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:08:10 by ccravero          #+#    #+#             */
/*   Updated: 2022/09/21 15:58:28 by ccravero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Account.hpp"
#include <iostream>
#include <ctime>
int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals= 0;
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";amount:"<<_amount<<";created"<<std::endl;
	_nbAccounts += 1;
	_totalAmount +=_amount;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";amount:"<<_amount<<";closed"<<std::endl;
}

void	Account::_displayTimestamp( void )
{
	time_t lt = std::time(NULL);
	std::tm	*tt = std::localtime(&lt);
	std::cout<<"["<<1900+tt->tm_year;
	if (tt->tm_mon < 10)
		std::cout<<'0';
	std::cout<<tt->tm_mon;
	if (tt->tm_mday < 10)
		std::cout<<'0';
	std::cout<<tt->tm_mday<<"_";
	if (tt->tm_hour < 10)
		std::cout<<'0';
	std::cout<<tt->tm_hour;
	if (tt->tm_min < 10)
		std::cout<<'0';
	std::cout<<tt->tm_min;
	if (tt->tm_sec < 10)
		std::cout<<'0';
	std::cout<<tt->tm_sec<<"] ";		
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout<<"accounts:"<<_nbAccounts<<";total:"<<_totalAmount<<";deposits:"<<_totalNbDeposits<<";withdrawals:"<<_totalNbWithdrawals<<std::endl;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";amount:"<<_amount<<";deposits:"<<_nbDeposits<<";withdrawals:"<<_nbWithdrawals<<std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	_totalNbDeposits+=1;
	_nbDeposits+=1;
	_amount+=deposit;
	_totalAmount+=deposit;
	std::cout<<"index:"<<_accountIndex<<";p_amount:"<<_amount - deposit<<";deposit:"<<deposit<<";amount:"<<_amount<<";nb_deposits"<<_nbDeposits<<std::endl;
}


bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";p_amount:"<<_amount<<";withdrawal:";
	if (withdrawal>_amount)
	{
		std::cout<<"refused"<<std::endl;
		return false;
	}
	_totalNbWithdrawals+=1;
	_nbWithdrawals+=1;
	_amount-=withdrawal;
	_totalAmount-=withdrawal;
	std::cout<<withdrawal<<";amount:"<<_amount<<";nb_withdrawals"<<_nbWithdrawals<<std::endl;
	return false;
}

int Account::checkAmount() const
{
	return (_amount);
}

int	Account::getNbAccounts( void )
{
	return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return _totalAmount;
}

int	Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}