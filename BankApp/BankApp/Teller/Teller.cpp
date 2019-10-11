#include "Teller.h"

/*
* Gets the User's id
* return: id
*/
BaseUser Teller::getClient(int id) {
	
}

std::vector<BaseUser> Teller::getClientsList() {

}

void Teller::createClientAccount(int id, std::string username, std::string password) {

}

void Teller::setHoursWorked(double hours) {
	this->hours = hours;
}

double Teller::getHoursWorkde() {
	return hours;
}