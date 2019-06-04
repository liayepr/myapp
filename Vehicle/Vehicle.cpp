#include "Vehicle.h"

string Vehicle::getMark()
{
	return mark;
}

int Vehicle::getSpeed()
{
	return speed;
}

int Vehicle::getYear()
{
	return year;
}

int Vehicle::accelarate()
{
	return speed += 10;
}

int Vehicle::changeYear()
{
	return year + 1;
}
