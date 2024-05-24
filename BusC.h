#pragma once
#include "Car.h"
#include <iostream>

class BusC : private Car{
private:
    int seats;
public:
    using Car::setCylinders;
    using Car::setBrand;
    using Car::setPower;
    using Car::getPower;
    using Car::getCylinders;
    using Car::getBrand;
    BusC();
    BusC(string b, int c, int p, int s);
    void setSeats(int s);
    int getSeats();
    operator string() const;
    BusC (const BusC &busC);
    BusC &operator = (const BusC &car);
    friend istream &operator>>(istream &in, BusC &busC);
    friend ostream &operator<<(ostream &out, const BusC &busC);
    BusC &operator++();
    BusC &operator--();
    BusC operator++(int);
    BusC operator--(int);
};
