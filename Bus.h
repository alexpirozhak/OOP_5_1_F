#pragma once
#include "Car.h"
#include <iostream>
#include <string>

using namespace std;

class Bus : public Car {
    int seats;

public:
    Bus();
    Bus(string b, int c, int p, int s);
    void setSeats(int s);
    int getSeats();
    operator string() const;
    Bus (const Bus &bus);
    Bus &operator = (const Bus &bus);
    friend istream &operator>>(istream &in, Bus &bus);
    friend ostream &operator<<(ostream &out, const Bus &bus);
    Bus &operator++();
    Bus &operator--();
    Bus operator++(int);
    Bus operator--(int);
};
