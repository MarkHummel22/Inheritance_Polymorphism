#pragma once
#ifndef VEHICLE_H
#define VEHICLE_H

using namespace std;
class Vehicle{
protected:
	string manName; 
	int yearBuilt; 
public:
	Vehicle();
	string getManName();
	void setManName(string MN);
	int getYearBuilt();
	void setYearBuilt(int newYr);
	void displayInfo();
};

#endif 
