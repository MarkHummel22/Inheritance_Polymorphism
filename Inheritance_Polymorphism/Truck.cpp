#include <iostream>
#include <string>
#include "Truck.h"


Truck::Truck() {
	towingCap = 0;
}
double Truck::getTowingCap() {
	return towingCap;
}
void Truck::setTowingCap(double tow) {
	towingCap = tow;
}
void Truck::displayInfo() {
	cout << "Vehicle Information:" << endl;
	cout << "Manufacturer name: " << manName << endl;
	cout << "Year built: " << yearBuilt << endl;
	cout << "Towing capacity: " << towingCap << endl;
}
