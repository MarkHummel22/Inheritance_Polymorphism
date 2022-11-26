#pragma once
#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"

class Truck : public Vehicle {
private:
	double towingCapacity;
public:
	Truck() {
		towingCapacity = 0;
	}
	Truck(string n, int y, int tc) : Vehicle(n, y){
		towingCapacity = tc;
	}
	double getTowingCapacity() const{
		return towingCapacity;
	}
	void setTowingCapacity(double gains) {
		towingCapacity = gains;
	}
	void displayInfo();
};



#endif // !TRUCK_H
