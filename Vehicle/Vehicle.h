#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
private:
	string mark;
	string collor;
	string type;
	int year;
	int speed;

public:

	Vehicle(string m, string c, string t, int y, int s)
	{
		mark = m;
		collor = c;
		type = t;
		year = y;
		speed = s;
	}

	int accelarate();
	int changeYear();

	string getMark();
	int getSpeed();
	int getYear();

};