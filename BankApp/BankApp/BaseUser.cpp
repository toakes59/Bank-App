#include "BaseUser.h"

void BaseUser::setId(int id) {
	this->id = id;

}

int BaseUser::getId() {

	return this->id;
}

void BaseUser::setUsername(std::string username) {
	this->username = username;

}

std::string BaseUser::getUsername() {

	return this->username;
}

void BaseUser::setPassword(std::string Password) {
	this->password = password;

}

std::string BaseUser::getPassword() {

	return this->password;
}