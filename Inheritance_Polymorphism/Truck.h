#pragma once
#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"


class Truck : public Vehicle {
private:
	double towingCap;
public:
	Truck();
	double getTowingCap();
	void setTowingCap(double tow);
	void displayInfo();
};
#endif 
