#include "Car.h"
#include <iostream>

using namespace std;

Car::Car(string brand, string model, int year)
{
    this->brand = brand;
    this->model = model;
    this->yearModel = year;
}

void Car::printData()
{
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Year model: " << yearModel << endl;
}
