#include <iostream>
#include <string>

using namespace std;

#include "BaseUser.h"

int main() {

	BaseUser newUser;

	newUser.setId(10);
	cout << newUser.getId() << endl;

	return 0;
}