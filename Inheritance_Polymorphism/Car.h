#pragma once
#include <string>
#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"

class Car : public Vehicle {

private:
	int numDoors;
public:
	int getNumDoors() {
		return numDoors;
	}
	void setNumDoors(int doors) {
		numDoors = doors;
	}
	void displayInfo();
};


#endif // !Car
