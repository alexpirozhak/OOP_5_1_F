#include "Car.h"

Car::Car() : brand("-"), cylinders(0), power(0) {}

Car::Car(string b, int c, int p) : brand(b), cylinders(c), power(p) {
    if (c <= 0 || p <= 0) {
        cerr << "Помилка: неправильні дані.\n";
        exit(1);
    }
}

void Car::setBrand(string b) {
    brand = b;
}

void Car::setCylinders(int c) {
    if (c <= 0) {
        cerr << "Помилка: неправильні дані.\n";
        exit(1);
    }
    cylinders = c;
}

void Car::setPower(int p) {
    if (p <= 0) {
        cerr << "Помилка: неправильні дані.\n";
        exit(1);
    }
    power = p;
}

string Car::getBrand() const{
    return brand;
}

int Car::getCylinders() const{
    return cylinders;
}

int Car::getPower() const{
    return power;
}

Car::operator string() const{
    return "Марка: " + brand + ", Циліндри: " + to_string(cylinders) + ", Потужність: " + to_string(power);
}

istream &operator>>(istream &in, Car &car) {
    in >> car.brand >> car.cylinders >> car.power;
    return in;
}

ostream &operator<<(ostream &out, const Car &car) {
    out << (string)car;
    return out;
}

Car::Car(const Car &car) : brand(car.brand), cylinders(car.cylinders), power(car.power) {}

Car &Car::operator=(const Car &car) {
    brand = car.brand;
    cylinders = car.cylinders;
    power = car.power;
    return *this;
}

Car &Car::operator++() {
    ++cylinders;
    return *this;
}

Car &Car::operator--() {
    --cylinders;
    return *this;
}

Car Car::operator++(int) {
    Car copy = *this;
    cylinders++;
    return copy;
}

Car Car::operator--(int) {
    Car copy = *this;
    cylinders--;
    return copy;
}

const char *LongLongException::what() const noexcept {
    return "LongLong exeption!";
}

const char *MyException::what() const noexcept {
    return "My exeption!";
}
