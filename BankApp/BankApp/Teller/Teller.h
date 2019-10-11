#pragma once
#include <string>
#include <vector>
#include "..\BaseUser\BaseUser.h"

class Teller : public BaseUser
{
private:
	double timeWorked;
	double hours;

public:

	/*
	* Gets client by client ID
	* BaseUser type will need to switch to client when it is implemented
	*/
	BaseUser getClient(int id);

	/*
	* Gets ClientsList
	*/
	std::vector<BaseUser> getClientsList();

	/*
	* Creates a Client Account
	*/
	void createClientAccount(int id, std::string username, std::string password);

	/*
	* Sets hours worked
	*/
	void setHoursWorked(double hours);

	/*
	* Gets hours worked
	*/
	double getHoursWorkde();

}; 
