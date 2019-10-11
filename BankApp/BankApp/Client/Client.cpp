#include "Client.h"
#include <iostream>

void Client::setSMoney() 
{
	sMoney = 0.0; //If no argument was used, set value to 0
}

void Client::setSMoney(double sMoney)
{
	this->sMoney = cMoney;
}

double Client::getSMoney()
{
	return sMoney;
}

void Client::setCMoney()
{
	cMoney = 0.0; //If no argument was used, set value to 0
}

void Client::setCMoney(double cMoney)
{
	this->cMoney = cMoney;
}

double Client::getCMoney()
{
	return cMoney;
}

/* Accounts will be accounted for numerically, in this case, account 1 will refer to a savings account and account 2 will refer to a checking account.
Upon further implentation, it might be better to use a switch statement for more than 2 accounts
*/
bool Client::withdraw(double money, int account)
{	
	string warning = "You do not have enough money in your account";
	
	//Check to see that a valid account number was chosen 
	
	if (account == 1)
	{
		if(this->sMoney < money) //If there's not enough money in the account, relay action can't be done
		{
			cout << warning;
			return false; //Returns bool value to check if a withdraw action was made
		}
		this->sMoney -= money;
	}
	else if (account == 2)
	{
		if (this->cMoney < money) 
		{
			cout << warning;
			return false;
		}
		this->cMoney -= money;
	}
	
	else {
		cout << "Account number " << account << " doesn't exist.";
		return false;
	}
	return true; 
}

/*In this application, we assume that the client does have the amount
money to deposit, further applications to the class can be made to 
include how much money the client has in the wallet
*/
bool Client::deposit(double money, int account)
{
	if (account == 1)
	{
		this->sMoney += money;
	}
	else if (account == 2)
	{
		this->cMoney += money;
	}
	else {
		cout << "Account number " << account << " doesn't exist.";
		return false;
	}
	return true;
}