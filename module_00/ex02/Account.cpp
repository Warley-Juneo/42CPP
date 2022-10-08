/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 13:12:17 by wjuneo-f          #+#    #+#             */
/*   Updated: 2022/09/08 16:47:21 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include "iostream"
#include <string>
#include <ctime>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

//======================Public members ======================//
int Account::getNbAccounts(void) {
	return (_nbAccounts);
}

int Account::getTotalAmount(void) {
	return (_totalAmount);
}

int Account::getNbDeposits(void) {
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void) {
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void) {
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts
			  << ";total:" << _totalAmount
			  << ";deposits:" << _totalNbDeposits
			  << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}


Account::Account(int initial_deposit) {
	_displayTimestamp();
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_accountIndex = (_nbAccounts - 1);
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	std::cout << "index:" << _accountIndex;
	std::cout << ";amout:" << _amount << ";created" << std::endl;
}

Account::~Account() {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";amount:" << _amount
			  << ";closed" << std::endl;
}

void Account::makeDeposit(int deposit) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";p_amount:" << _amount
			  << ";deposit:" << deposit;
	_amount += deposit;
	std::cout << ";amount:" << _amount
			  << ";nb_deposits:" <<++_nbDeposits << std::endl;
	_totalNbDeposits++;
	_totalAmount += deposit;
}

bool Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	if (checkAmount() < withdrawal) {
		std::cout << ";p_amount:" << _amount
				  << ";withdrawal:refused" << std::endl;
		return (0);
	}
	std::cout << ";p_amount:" << _amount
			  << ";withdrawal:" << withdrawal;
	_amount -= withdrawal;
	std::cout << ";amount:" << _amount
			  << ";nb_withdrawals:" << ++_nbWithdrawals << std::endl;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;

	return (1);
}

int Account::checkAmount(void) const {
	return (this->_amount);
}

void Account::displayStatus(void) const {
	_displayTimestamp();
	std::cout << "accounts:" << _accountIndex
			  << ";amoun:" << _amount
			  << ";deposits:" << _nbDeposits
			  << ";withdrawals:" << _nbWithdrawals << std::endl;
}

//==========================================================//

//======================Private members ======================//

Account::Account() {
	this->_accountIndex = 0;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
}

void	Account::_displayTimestamp( void ) {
	std::time_t	curr_time = std::time(NULL);
	std::tm		*time_now = std::localtime(&curr_time);
	std::cout << "[";
	std::cout << time_now->tm_year + 1900;
	std::cout << std::setw(2) << std::setfill('0') << time_now->tm_mon;
	std::cout << std::setw(2) << std::setfill('0') << time_now->tm_mday;
	std::cout << "_";
	std::cout << time_now->tm_hour;
	std::cout << time_now->tm_min;
	std::cout << time_now->tm_sec;
	std::cout << "] ";
}
