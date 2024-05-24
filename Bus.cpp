#include "Bus.h"

Bus::Bus() : Car(), seats(0) {}

Bus::Bus(string b, int c, int p, int s) : Car(b, c, p), seats(s) {
    if (s <= 0) {
        cerr << "Помилка: неправильні дані.\n";
        exit(1);
    }
}

void Bus::setSeats(int s) {
    if (s <= 0) {
        cerr << "Помилка: неправильні дані.\n";
        exit(1);
    }
    seats = s;
}

int Bus::getSeats() {
    return seats;
}

Bus::operator string() const{
    return Car::operator string() + ", Місця: " + to_string(seats);
}

istream &operator>>(istream &in, Bus &bus) {
    in >> (Car&)bus >> bus.seats;
    return in;
}

ostream &operator<<(ostream &out, const Bus &bus) {
    out << (string)bus;
    return out;
}

Bus::Bus(const Bus &bus) : Car(bus), seats(bus.seats) {}

Bus &Bus::operator=(const Bus &bus) {
    if (this == &bus)
        return *this;
    seats = bus.seats;
    return *this;
}

Bus &Bus::operator++() {
    ++seats;
    return *this;
}

Bus &Bus::operator--() {
    --seats;
    return *this;
}

Bus Bus::operator++(int) {
    Bus copy = *this;
    seats++;
    return copy;
}

Bus Bus::operator--(int) {
    Bus copy = *this;
    seats--;
    return copy;
}
