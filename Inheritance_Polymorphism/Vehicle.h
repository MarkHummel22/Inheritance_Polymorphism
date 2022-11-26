#pragma once
#include <string>
#ifndef VEHICLE_H
#define VEHICLE_H


class Vehicle
{
protected:
	string manufacturerName; // for holding the manufaturer name
	int yearBuilt; // for holding the year the vehicle was built
public:
	// Default constructor
	Vehicle() {
		manufacturerName = "NONAMEGIVEN";
		yearBuilt = 1900;
	}
	// Constructor
	Vehicle(string mN, int yr) {
		manufacturerName = mN;
		yearBuilt = yr;
	}
	// getters and setters
	string getManufacturerName() const{
		return manufacturerName;
	}
	void setManufacturerName(string newMN) {
		manufacturerName = newMN;
	}
	int getYearBuilt() const {
		return yearBuilt;
	}
	void setYearBuilt(int newYr) {
		yearBuilt = newYr;
	}
	void displayInfo();

};

#endif // !VEHICLE_H
