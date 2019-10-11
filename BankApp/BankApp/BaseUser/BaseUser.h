#include <string>
#pragma once

class BaseUser 
{
private:
	int id;						//User's id
	std::string username;		//User's username
	std::string password;		//User's password

public:

	/*
	* Sets the User's id
	*/
	void setId(int id);

	/*
	* Gets the User's id
	*/
	int getId();

	/*
	* Sets the User's username
	*/
	void setUsername(std::string username);

	/*
	* Gets the User's username
	*/
	std::string getUsername();

	/*
	* Sets the User's password
	*/
	void setPassword(std::string Password);
	
	/*
	* Gets the User's password
	*/
	std::string getPassword();
	
};