// Mark Hummel 
// CIS 1202 Module 14
// 11/27/2022

#include <iostream>
#include <string>
#include "Vehicle.h"
//#include "Car.h"
//#include "Truck.h"

using namespace std;

int main() {
		
	Vehicle myVehicle;
	string v = "honda";
	int y = 2022;
	myVehicle.setManufacturerName(v);
	myVehicle.setYearBuilt(y);
	myVehicle.displayInfo();

	return 0;
}
