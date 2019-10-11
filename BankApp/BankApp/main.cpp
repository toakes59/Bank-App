#include <iostream>
#include <vector>
#include <string>
#include "BaseUser.h"

using namespace std;

#include "BaseUser\BaseUser.h"

int main() {

	//Testing BaseUser class
	BaseUser newUser;

	newUser.setId(10);
	cout << newUser.getId() << endl;
	
	return 0;
}