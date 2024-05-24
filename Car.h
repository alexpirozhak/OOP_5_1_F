#pragma once
#include <iostream>
#include <string>

using namespace std;

class LongLongException : public exception {
public:
    const char* what() const noexcept override;
};

class MyException{
public:
    const char* what() const noexcept;
};

class Car{
    string brand;
    int cylinders;
    int power;

public:
    Car();
    Car(string b, int c, int p);
    void setBrand(string b);
    void setCylinders(int c);
    void setPower(int p);
    string getBrand() const;
    int getCylinders() const;
    int getPower() const;
    operator string() const;
    Car (const Car &car);
    Car &operator = (const Car &car);
    friend istream &operator>>(istream &in, Car &car);
    friend ostream &operator<<(ostream &out, const Car &car);
    Car &operator++();
    Car &operator--();
    Car operator++(int);
    Car operator--(int);
};
