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
string Vehicle::getManName(){
	return manName;
}
void Vehicle::setManName(string mn){
	manName = mn;
}
int Vehicle::getYearBuilt() {
	return yearBuilt;
}
void Vehicle::setYearBuilt(int yr) {
	yearBuilt = yr;
}
void Vehicle::displayInfo() {
	cout << "Vehicle Information:" << endl;
	cout << "Manufacturer name: " << manName << endl;
	cout << "Year built: " << yearBuilt << endl;
}
