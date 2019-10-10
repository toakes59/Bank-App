#include "Teller.h"

/*
* Gets the User's id
* return: id
*/
BaseUser Teller::getClient(int id) {
	
}

/*
* Gets ClientsList
*/
std::vector<BaseUser> Teller::getClientsList() {

}

/*
* Creates a Client Account
*/
void Teller::createClientAccount(int id, std::string username, std::string password) {

}

/*
* Sets hours worked
*/
void Teller::setHoursWorked(double hours) {
	this->hours = hours;
}

/*
* Gets hours worked
*/
double Teller::getHoursWorkde() {
	return hours;
}