#include "BusC.h"

BusC::BusC() : Car(), seats(0) {}

BusC::BusC(string b, int c, int p, int s) : Car(b, c, p), seats(s) {
    if (s <= 0) {
        cerr << "Помилка: неправильні дані.\n";
        exit(1);
    }
}

void BusC::setSeats(int s) {
    if (s <= 0) {
        cerr << "Помилка: неправильні дані.\n";
        exit(1);
    }
    seats = s;
}

int BusC::getSeats() {
    return seats;
}

BusC::operator string() const{
    return Car::operator string() + ", Місця: " + to_string(seats);
}

istream &operator>>(istream &in, BusC &bus) {
    in >> (Car&)bus >> bus.seats;
    return in;
}

ostream &operator<<(ostream &out, const BusC &bus) {
    out << (string)bus;
    return out;
}

BusC::BusC(const BusC &bus) : Car(bus), seats(bus.seats) {}

BusC &BusC::operator=(const BusC &bus) {
    if (this == &bus)
        return *this;
    seats = bus.seats;
    return *this;
}

BusC &BusC::operator++() {
    ++seats;
    return *this;
}

BusC &BusC::operator--() {
    --seats;
    return *this;
}

BusC BusC::operator++(int) {
    BusC copy = *this;
    seats++;
    return copy;
}

BusC BusC::operator--(int) {
    BusC copy = *this;
    seats--;
    return copy;
}
