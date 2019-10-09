#include <string>
#include <vector>
#include "..\BaseUser\BaseUser.h"
#pragma once

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

	std::vector<BaseUser> getClientsList();

	void createClientAccount(int id, std::string username, std::string password);

	void setHoursWorked(double hours);

	double getHoursWorkde();

}; 
