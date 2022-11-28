// Mark Hummel 
// CIS 1202 Module 14
// 11/25/2022

#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;
Vehicle::Vehicle(){
	manName = "";
	yearBuilt = 1900;
}
string Vehicle::getManufacturerName(){
	return manName;
}
void Vehicle::setManufacturerName(string newMN){
	manName = newMN;
}
int Vehicle::getYearBuilt() {
	return yearBuilt;
}
void Vehicle::setYearBuilt(int newYr) {
	yearBuilt = newYr;
}
void Vehicle::displayInfo() {
	cout << "Vehicle Information:" << endl;
	cout << "Manufacturer name: " << manName << endl;
	cout << "Year built: " << yearBuilt << endl;
}
