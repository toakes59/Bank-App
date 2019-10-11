#pragma once
#include <string>
#include "BaseUser.h"
using namespace std;

class Client : public BaseUser
{
private: 
	double sMoney; //Amount of money in savings account
	double cMoney; //Amount of money in checkings account

public:

	void setSMoney();
	
	void setSMoney(double sMoney);

	double getSMoney();

	void setCMoney();

	void setCMoney(double cMoney);

	double getCMoney();

	bool withdraw(double money, int account);
};