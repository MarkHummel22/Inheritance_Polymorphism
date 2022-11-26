// Mark Hummel 
// CIS 1202 Module 14
// 11/25/2022


#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include <iostream>
#include <string>

using namespace std;

int main() {

	Car car("Honda", 2012, 5);
	cout << car.getManufacturerName() << endl;
	cout << car.getYearBuilt() << endl;
	cout << car.getNumDoors();


	return 0;
}