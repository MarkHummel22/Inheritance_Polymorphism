// Mark Hummel 
// CIS 1202 Module 14
// 11/27/2022

#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main() {
	string tempM;
	int tempY;
	int tempD = 0;
	double tempT = 0.0;

	Vehicle myVehicle;

	cout << "Vehicle test" << endl;
	cout << "Enter the manufacturer: " << endl;
	cin >> tempM;
	myVehicle.setManName(tempM);
	cout << "Enter the Year built: " << endl;
	cin >> tempY;
	myVehicle.setYearBuilt(tempY);
	myVehicle.displayInfo();

	return 0;
}
