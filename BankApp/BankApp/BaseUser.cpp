#include "BaseUser.h"

/*
* Sets the User's id
*/
void BaseUser::setId(int id) {
	this->id = id;

}

/*
* Gets the User's id
* return: id
*/
int BaseUser::getId() {

	return this->id;
}

/*
* Sets the User's username
*/
void BaseUser::setUsername(std::string username) {
	this->username = username;

}

/*
* Gets the User's username
* return: username
*/
std::string BaseUser::getUsername() {

	return this->username;
}

/*
* Sets the User's password
*/
void BaseUser::setPassword(std::string Password) {
	this->password = password;

}

/*
* Gets the User's password
* return: password
*/
std::string BaseUser::getPassword() {

	return this->password;
}