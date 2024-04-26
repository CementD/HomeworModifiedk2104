#include "Flat.h"
#include <iostream>
using namespace std;

int main() {
	Flat flat1;
	cin >> flat1;
	cout << "Flat1:\t";
	cout << flat1;

	Flat flat2(40.6, 1532.4);
	cout << "Flat2:\t";
	cout << flat2;

	if (flat1 > flat2)
		cout << "Flat1 > Flat2" << endl;
	else
		cout << "Flat1 < flat2" << endl;


	if (flat1 == flat2)
		cout << "Size flat1 == flat2" << endl;
	else
		cout << "Size flat1 != flat2" << endl;

	Flat& flat3 = flat2;
	cout << "Flat3:\t";
	cout << flat3;

	return 0;
}