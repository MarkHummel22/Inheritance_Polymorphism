#pragma once
#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"

class Car : public Vehicle {

private:
	int numDoors;
public:
	Car();
	Car(string n, int y, int d) : Vehicle(n, y) {};
	int getNumDoors() const;
	void setNumDoors(int doors);
	void displayInfo();
};


#endif // !Car
