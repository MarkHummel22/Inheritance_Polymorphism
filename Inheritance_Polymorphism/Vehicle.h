#pragma once
#ifndef VEHICLE_H
#define VEHICLE_H

using namespace std;
class Vehicle
{
protected:
	string manufacturerName; // for holding the manufaturer name
	int yearBuilt; // for holding the year the vehicle was built
public:
	Vehicle() {};
	Vehicle(string mN, int yr);
	string getManufacturerName() const;
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
