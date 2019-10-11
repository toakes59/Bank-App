#include <iostream>
#include <vector>
#include <string>
#include "BaseUser\BaseUser.h"
#include "Joemers_Testing\Joemer_Test.h"

using namespace std;


int main() {
	//Joemer Test Function
	j_test();
	//Testing BaseUser class
	BaseUser newUser;

	newUser.setId(10);
	cout << newUser.getId() << endl;
	
	return 0;
}