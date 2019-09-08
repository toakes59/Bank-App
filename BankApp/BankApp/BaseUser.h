#include <string>
#pragma once

class BaseUser 
{
private:
	int id;
	std::string username;
	std::string password;

public:

	void setId(int id);

	int getId();

	void setUsername(std::string username);

	std::string getUsername();

	void setPassword(std::string Password);
	
	std::string getPassword();
	
};