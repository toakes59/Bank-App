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
	
	void createTeller();

	Teller getTeller(int id);

	void setTeller(Teller teller);

};