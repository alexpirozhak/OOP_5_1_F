#include <iostream>
#include <string>
#include "Car.h"
#include "Bus.h"
#include "BusC.h"
using namespace std;

int main() {
    string brand;
    int power, cylinders, seats;
    Car car;
    cout << "Enter car details (brand cylinders power): ";
    cin >> car;
    cout << car << endl;
    car++;
    cout << "Incremented car: " << car << endl;
    car--;
    cout << "Decremented car: " << car << endl << endl;

    Bus bus("Mercedes-Benz", 4, 129, 24);
    cout << "Тепер для бусіка: " << endl << string(bus) << endl << endl;

    cout << "Вкажіть нові значення: " << endl;
    cout << "Марка: "; cin >> brand;
    cout << "Циліндри: "; cin >> cylinders;
    cout << "Потужність: "; cin >> power;
    cout << "Сидіння: "; cin >> seats;
    bus.setBrand(brand);
    bus.setCylinders(cylinders);
    bus.setPower(power);
    bus.setSeats(seats);

    cout << "Марка: " << bus.getBrand() << ", Циліндри: " << bus.getCylinders() << ", Потужність: " << bus.getPower() << ", Місця: " << bus.getSeats() << endl;
    ++bus;
    cout << "Incremented bus: " << bus << endl;
    --bus;
    cout << "Decremented bus: " << bus << endl << endl;

    BusC busC("Mercedes-Benz", 4, 129, 24);
    cout << "Тепер для бусіка 2: " << endl << busC << endl << endl;

    cout << "Вкажіть нові значення: " << endl;
    cout << "Марка: "; cin >> brand;
    cout << "Циліндри: "; cin >> cylinders;
    cout << "Потужність: "; cin >> power;
    cout << "Сидіння: "; cin >> seats;
    busC.setBrand(brand);
    busC.setCylinders(cylinders);
    busC.setPower(power);
    busC.setSeats(seats);

    cout << "Марка: " << busC.getBrand() << ", Циліндри: " << busC.getCylinders() << ", Потужність: " << busC.getPower() << ", Місця: " << busC.getSeats() << endl;

    try {
        throw bad_exception();
    }
    catch (const bad_exception& e)
    {
        cerr<<"Error:" << e.what() << '\n';
    }

    try {
        throw bad_exception();
    }
    catch (bad_exception e)
    {
        cerr<<"Error:" << e.what() << '\n';
    }

    try {
        throw new bad_exception();

    }
    catch (bad_exception* e) {
        std::cerr << "Error:: " << e->what() << '\n';
        delete e;
    }


    try{
        throw LongLongException();

    }
    catch (const LongLongException& e) {
        cerr<<"Error:" << e.what() << '\n';
    }

    try {
        throw MyException();
    }
    catch (const MyException& e) {
        std::cerr << "Error:: " << e.what() << '\n';
    }

    try {
        throw MyException();
    }
    catch (const MyException e) {
        std::cerr << "Error:: " << e.what() << '\n';
    }

    try {
        throw MyException();
    }
    catch (MyException e) {
        std::cerr << "Error:: " << e.what() << '\n';
    }
    catch (MyException* e) {
        std::cerr << "Error:: " << e->what() << '\n';
    }
}