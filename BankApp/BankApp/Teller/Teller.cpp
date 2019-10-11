#include "Teller.h"

/*
* Gets the User's id
* return: id
*/
BaseUser Teller::getClient(int id) {
	
	BaseUser teller;

	return teller;
}

/*
* Gets ClientsList
*/
std::vector<BaseUser> Teller::getClientsList() {
	std::vector<BaseUser> tellers;
	//TODO add function add new teller to end of tellers vector (change to linked list or hash map where key is ID later)

	return tellers;
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