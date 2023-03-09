/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozer <mozer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:23:27 by mozer             #+#    #+#             */
/*   Updated: 2023/03/09 14:31:14 by mozer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//! bir class da private olarak tanımlanan static değişkenleri 
//! kullanmadan önce değer ataması yapılması gerekmektedir. 
#include "Account.hpp"
 #include <iostream>
 #include <ctime>
 #include <iomanip>
 
 int Account::_nbAccounts = 0;
 int Account::_totalAmount = 0;
 int Account::_totalNbDeposits = 0;
 int Account::_totalNbWithdrawals = 0;
 
 Account::Account(int initial_deposit){
         _displayTimestamp();
         _accountIndex = (getNbAccounts());
         _amount += initial_deposit;
         std::cout << "index:" << _accountIndex << ";amount:";
         std::cout << _amount << ";created" << std::endl;
         _nbAccounts++;
         _totalAmount += initial_deposit;
 }
 void        Account::displayAccountsInfos( void ){
         _displayTimestamp();
         std::cout << "accounts:" << _nbAccounts << ";total:";
         std::cout << _totalAmount << ";deposits:";
         std::cout << _totalNbDeposits << ";withdrawals:";
         std::cout << _totalNbWithdrawals << std::endl;
 }
 int                Account::checkAmount( void ) const{
         return (0);
 }
 void        Account::displayStatus( void ) const{
         _displayTimestamp();
         std::cout << "index:" << _accountIndex << ";amount:";
         std::cout << _amount << ";deposits:";
         std::cout << _nbDeposits << ";withdrawals:";
         std::cout << _nbWithdrawals << std::endl;
 }
 bool        Account::makeWithdrawal( int withdrawal ){
         _displayTimestamp();
         std::cout << "index:" << _accountIndex << ";p_amount:";
         std::cout << _amount << ";withdrawal:";
         if (_amount - withdrawal < 0)        {
                 std::cout << "refused" << std::endl;
                 return (false);
         }
         else
            std::cout << withdrawal;
            _amount = _amount - withdrawal;
            _nbWithdrawals++;
            _totalNbWithdrawals++;
            std::cout << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals;
            std::cout << std::endl;
            _totalAmount -= withdrawal;
            return (true);
 }
 void        Account::makeDeposit( int deposit ){
         _displayTimestamp();
         std::cout << "index:" << _accountIndex << ";p_amount:";
         std::cout << _amount << ";deposit:" << deposit;
         _amount += deposit;
         _nbDeposits++;
         _totalNbDeposits++;
         std::cout << ";amount:" << _amount << ";nb_deposit:" << _nbDeposits;
         std::cout << std::endl;
         _totalAmount += deposit;
 }
 int Account::getNbAccounts(void){
         return (_nbAccounts);
 }
 int Account::getNbDeposits(void){
         return (_totalNbDeposits);
 }
 int Account::getTotalAmount(void){
         return (_totalAmount);
 }
 int Account::getNbWithdrawals(void){
         return(_totalNbWithdrawals);
 }
 void        Account::_displayTimestamp( void ){
         std::time_t        time;
         time = std::time(NULL);
         std::cout << std::setfill('0') << "["
                 << std::setw(2) << 1900 + std::localtime(&time)->tm_year
                 << std::setw(2) << 1 +  std::localtime(&time)->tm_mon
                 << std::setw(2) << std::localtime(&time)->tm_mday << "_"
                 << std::setw(2) << std::localtime(&time)->tm_hour
                 << std::setw(2) << std::localtime(&time)->tm_min
                 << std::setw(2) << std::localtime(&time)->tm_sec
                 << "] ";
 }
 Account::~Account(void){
         _displayTimestamp();
         std::cout << "index:" << _accountIndex << ";amount:";
         std::cout << _amount << ";closed" << std::endl;
         _nbAccounts--;
         _totalAmount += _amount;
 }