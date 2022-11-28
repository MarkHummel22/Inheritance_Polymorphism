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
	Car myCar;
	Truck myTruck;

	cout << "Vehicle test" << endl;
	cout << "Enter the manufacturer: ";
	getline(cin, tempM);
	myVehicle.setManName(tempM);
	cout << "Enter the Year built: ";
	cin >> tempY;
	myVehicle.setYearBuilt(tempY);
	myVehicle.displayInfo();

	cout << "Car test" << endl;
	cout << "Enter the manufacturer: ";
	getline(cin, tempM);
	myVehicle.setManName(tempM);
	cout << "Enter the Year built: ";
	cin >> tempY;
	myCar.setYearBuilt(tempY);
	cout << "Enter the number of doors";
	cin >> tempD;
	myCar.setDoors(tempD);
	myCar.displayInfo();

	cout << "Truck test" << endl;
	cout << "Enter the manufacturer: ";
	getline(cin, tempM);
	myVehicle.setManName(tempM);
	cout << "Enter the Year built: ";
	cin >> tempY;
	myTruck.setYearBuilt(tempY);
	cout << "Enter the towing capacity: ";
	cin >> tempT;
	myTruck.setTowingCap(tempT);
	myTruck.displayInfo();

	return 0;
}
