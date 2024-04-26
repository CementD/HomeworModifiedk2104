#include "Overcoat.h"
#include <iostream>
using namespace std;

int main() {
	Overcoat coat1;
	cin >> coat1;
	cout << "Coat1:\t";
	cout << coat1;

	Overcoat coat2("wool", 32.4);
	cout << "Coat2:\t";
	cout << coat2;

	if (coat1 > coat2)
		cout << "Coat1 > coat2" << endl;
	else
		cout << "Coat1 < coat2" << endl;


	if (coat1 == coat2)
		cout << "Facon coat1 == coat2" << endl;
	else
		cout << "Facon coat1 != coat2" << endl;

	Overcoat& coat3 = coat2;
	cout << "Coat3:\t";
	cout << coat3;

	return 0;
}