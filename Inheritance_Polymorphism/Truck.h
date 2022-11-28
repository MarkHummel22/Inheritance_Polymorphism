#pragma once
#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"


class Truck : public Vehicle {
private:
	double towingCapacity;
public:
	Truck();
	Truck(string n, int y, int tc) : Vehicle(n, y) {};
	double getTowingCapacity() const;
	void setTowingCapacity(double gains);
	void displayInfo();
};
#endif // !TRUCK_H
