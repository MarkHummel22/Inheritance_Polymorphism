#include <iostream>
#include <string>
#include "Car.h"



Car::Car() {
	doors = 0;
}
int Car::getDoors() {
	return doors;
}
void Car::setDoors(int d) {
	doors = d;
}
void Car::displayInfo() {
	cout << "Manufacturer name: " << manName << endl;
	cout << "Year built: " << yearBuilt << endl;
	cout << "Doors: " << doors << endl;
}
