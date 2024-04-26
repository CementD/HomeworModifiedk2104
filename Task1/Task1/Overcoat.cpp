#include "Overcoat.h"
#include <iostream>
#include <cstring>
using namespace std;

Overcoat::Overcoat() : facon(nullptr), price(0) {}

Overcoat::Overcoat(const char* f, double p) : price(p) {
	int length = strlen(f);
	facon = new char[length + 1];
	strcpy_s(facon, length + 1, f);
}

Overcoat::Overcoat(Overcoat&& obj) : facon{ obj.facon }, price{ obj.price } {
	obj.facon = nullptr;
	obj.price = 0;
}

Overcoat::~Overcoat() {
	delete[] facon;
}

Overcoat& Overcoat::operator=(const Overcoat& other) {
	if (this != &other) {
		price = other.price;
		int length = strlen(other.facon);
		char* newFacon = new char[length + 1];
		strcpy_s(newFacon, length + 1, other.facon);
		delete[] facon;
		facon = newFacon;
	}
	return *this;
}

bool Overcoat::operator==(const Overcoat& other) const {
	return (strcmp(facon, other.facon) == 0);
}

bool Overcoat::operator>(const Overcoat& other) const {
	return (price > other.price);
}

istream& operator>>(istream& in, Overcoat& coat) {
	cout << "Enter the price: ";
	in >> coat.price;
	char buffer[100];
	in.get();
	cout << "Enter the facon: ";
	in.getline(buffer, 100);
	int length = strlen(buffer);
	coat.facon = new char[length + 1];
	strcpy_s(coat.facon, length + 1, buffer);
	return in;
}

ostream& operator<<(ostream& out, const Overcoat& coat) {
	out << "Facon: " << coat.facon << "; Price: " << coat.price << endl;
	return out;
}