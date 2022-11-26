#pragma once
#include <string>
#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"

class Car : public Vehicle {

private:
	int numDoors;
public:
	Car() {
		numDoors = 0;
	}
	Car(string n, int y, int d) : Vehicle(n, y){
		numDoors = d;
	}
	int getNumDoors() const{
		return numDoors;
	}
	void setNumDoors(int doors) {
		numDoors = doors;
	}
	void displayInfo();
};


#endif // !Car
