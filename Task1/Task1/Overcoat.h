#include <iostream>
using namespace std;

class Overcoat {
	char* facon;
	double price;

public:
	Overcoat();
	Overcoat(const char* f, double p);
	Overcoat(Overcoat&& obj);
	~Overcoat();
	Overcoat& operator=(const Overcoat& other);
	bool operator==(const Overcoat& other) const;
	bool operator>(const Overcoat& other) const;
	friend istream& operator>>(istream& in, Overcoat& coat);
	friend ostream& operator<<(ostream& out, const Overcoat& coat);
};

