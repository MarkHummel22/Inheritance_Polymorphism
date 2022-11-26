#pragma once
#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"

class Truck : public Vehicle {
private:
	double towingCapacity;
public:
	double getTowingCapacity() {
		return towingCapacity;
	}
	void setTowingCapacity(double gains) {
		towingCapacity = gains;
	}
	void displayInfo();
};



#endif // !TRUCK_H
