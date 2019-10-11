#include <iostream>
#include <vector>
#include <string>
#include "BaseUser\BaseUser.h"
#include "Client\Client.h"

using namespace std;


void j_test() {
	Client client;
	client.deposit(31.2, 1);
	cout << client.getSMoney();
	system("pause");
}