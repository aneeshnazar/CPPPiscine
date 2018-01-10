#include "Account.class.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void )
{
    time_t  sec;
    struct tm   *tm;

    time(&sec);
    tm = localtime(&sec);
    std::cout << "[";
    std::cout << tm->tm_year + 1900;
    std::cout << ((tm->tm_mon + 1 < 10) ? "0" : "") << tm->tm_mon + 1;
    std::cout << ((tm->tm_mday + 1 < 10) ? "0" : "") << tm->tm_mday + 1 << "_";
    std::cout << ((tm->tm_hour < 10) ? "0" : "") << tm->tm_hour;
    std::cout << ((tm->tm_min < 10) ? "0" : "") << tm->tm_min;
    std::cout << ((tm->tm_sec < 10) ? "0" : "") << tm->tm_sec;
    std::cout << "]";
}

Account::Account( int initial_deposit )
{
    _amount = initial_deposit;
    _totalAmount += _amount;
    _accountIndex = _nbAccounts;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    ++_nbAccounts;
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" <<_amount <<";created" <<std::endl;
}

Account::~Account( void )
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" <<_amount <<";closed" <<std::endl;
}

int	Account::getNbAccounts( void ) {return (_nbAccounts);}
int	Account::getTotalAmount( void ) {return (_totalAmount);}
int	Account::getNbDeposits( void ) {return (_totalNbDeposits);}
int	Account::getNbWithdrawals( void ) {return (_totalNbWithdrawals);}

void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << " accounts:" << _nbAccounts << ";total:" << _totalAmount <<";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";p_amount:" << _amount;
    _totalAmount += deposit;
    _amount += deposit;
    ++_nbDeposits;
    ++_totalNbDeposits;
    std::cout << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";p_amount:" << _amount;
    if (_amount >= withdrawal && withdrawal > 0)
    {
        _totalAmount -= withdrawal;
        _amount -= withdrawal;
        ++_nbWithdrawals;
        ++_totalNbWithdrawals;
        std::cout << ";withdrawal:" << withdrawal << ";amount:" << _amount <<";nb_withdrawals:"<< _nbWithdrawals << std::endl;
        return (true);
    }
    else
    {
        std::cout <<";withdrawal:refused" << std::endl;
        return (false);
    }
}
int		Account::checkAmount( void ) const {return (_amount);}
void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits <<";withdrawals:"<< _nbWithdrawals << std::endl;
}
