#include <iostream>
#include <vector>
#include "Car.h"

using namespace std;

int main()
{
    // Luodaan vektori pinomuistiin
    vector<Car> carList;

    // Lisätään kolme autoa
    carList.push_back(Car("Toyota", "Corolla", 2020));
    carList.push_back(Car("Volvo", "V70", 2018));
    carList.push_back(Car("BMW", "320", 2022));

    // Tulostetaan toinen alkio
    cout << "Toisen auton tiedot:" << endl;
    carList.at(1).printData();

    cout << endl;
    cout << "Kaikki autot:" << endl;

    // Tulostetaan kaikki autot
    for(unsigned int i = 0; i < carList.size(); i++)
    {
        cout << endl;
        carList.at(i).printData();
    }

    return 0;
}
