#pragma once
#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"


class Car : public Vehicle {
private:
	int doors;
public:
	Car();
	int getDoors();
	void setDoors(int d);
	void displayInfo();

};


#endif 
