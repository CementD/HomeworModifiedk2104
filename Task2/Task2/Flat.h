#include <iostream>
using namespace std;

class Flat {
    double size;
    double price;

public:
    Flat();
    Flat(double pSize, double pPrice);
    Flat(Flat&& obj);
    Flat& operator=(const Flat& other);
    bool operator==(const Flat& other) const;
    bool operator>(const Flat& other) const;
    friend istream& operator>>(istream& in, Flat& flat);
    friend ostream& operator<<(ostream& out, const Flat& flat);
};