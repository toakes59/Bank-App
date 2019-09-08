#include <iostream>
#include <string>
#include "BaseUser.h"

using namespace std;


int main() {

	BaseUser newUser;

	newUser.setId(10);
	cout << newUser.getId() << endl;

	return 0;
}