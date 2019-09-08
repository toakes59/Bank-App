#include "Client.h"

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