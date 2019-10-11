#pragma once
#include <string>
#include <vector>
#include "..\BaseUser\BaseUser.h"
#include "..\Teller\Teller.h"

class Manager : public BaseUser
{
private:
	Teller teller;
	std::vector<Teller> tellers;

public:
	
	/*
	* Creates Teller
	*/
	void createTeller();

	/*
	* Gets Teller
	*/
	Teller getTeller(int id);

	/*
	* Sets Teller
	*/
	void setTeller(Teller teller);

	/*
	* Gets Tellers Acoount list
	*/
	std::vector<Teller> getTellerList() {}

};