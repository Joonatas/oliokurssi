#include <iostream>
#include <memory>

#include "Car.h"
#include "Rectangle.h"
#include "Student.h"

using namespace std;

int main()
{
    // CAR (pinomuisti)
    Car car;

    car.setBrand("Toyota");
    car.setModel("Corolla");
    car.setYearModel(2020);

    cout << "--- Car ---" << endl;
    car.printData();

    // RECTANGLE (kekomuisti)
    Rectangle *rect = new Rectangle();

    rect->setWidth(5.0);
    rect->setHeight(3.0);

    cout << endl;
    cout << "--- Rectangle ---" << endl;
    cout << "Area: " << rect->getArea() << endl;
    cout << "Circumference: " << rect->getCircum() << endl;

    delete rect;

    // STUDENT (smart pointer)
    unique_ptr<Student> student = make_unique<Student>();

    student->setName("Matti Meikalainen");
    student->setStudentNumber(12345);
    student->setAverage(4.2);

    cout << endl;
    cout << "--- Student ---" << endl;
    cout << "Name: " << student->getName() << endl;
    cout << "Student number: " << student->getStudentNumber() << endl;
    cout << "Average: " << student->getAverage() << endl;

    return 0;
}
