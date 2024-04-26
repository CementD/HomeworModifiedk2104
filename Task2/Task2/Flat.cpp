#include "Flat.h"
#include <iostream>
using namespace std;

Flat::Flat() : size(0), price(0) {}

Flat::Flat(double s, double p) : size(s), price(p) {}

Flat::Flat(Flat&& obj) : size{ obj.size }, price{ obj.price } {
    obj.size = 0;
    obj.price = 0;
}

Flat& Flat::operator=(const Flat& other) {
    if (this != &other) {
        size = other.size;
        price = other.price;
    }
    return *this;
}

bool Flat::operator==(const Flat& other) const {
    return (size == other.size);
}

bool Flat::operator>(const Flat& other) const {
    return (price > other.price);
}

istream& operator>>(istream& in, Flat& flat) {
    cout << "Enter the size: ";
    in >> flat.size;
    cout << "Enter the price: ";
    in >> flat.price;
    return in;
}

ostream& operator<<(ostream& out, const Flat& flat) {
    out << "Size: " << flat.size << "; Price: " << flat.price << endl;
    return out;
}