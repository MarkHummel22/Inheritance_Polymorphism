// Mark Hummel 
// CIS 1202 Module 14
// 11/25/2022

#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;
// Default constructor
Vehicle::Vehicle() {
	manufacturerName = "NONAMEGIVEN";
	yearBuilt = 1900;
}
// Constructor
Vehicle::Vehicle(string mN, int yr) {
	manufacturerName = mN;
	yearBuilt = yr;
}
string Vehicle::getManufacturerName() const {
	return manufacturerName;
}
void Vehicle::setManufacturerName(string newMN) {
	manufacturerName = newMN;
}
int Vehicle::getYearBuilt() const {
	return yearBuilt;
}
void Vehicle::setYearBuilt(int newYr) {
	yearBuilt = newYr;
}
void Vehicle::displayInfo() {
	cout << manufacturerName << endl;
	cout << yearBuilt << endl;
}
