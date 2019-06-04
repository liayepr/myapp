#include "Vehicle.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	Vehicle v1("Mersedes", "Red", "Sedan", 2015, 100);
	cout << "v1 mark is: " << v1.getMark() << endl;
	cout << "v1 year is: " << v1.getYear() << endl;
	cout << "v1 new year is: " << v1.changeYear() << endl;
	cout << "new speed is: " << v1.accelarate() << std::endl;
	system("pause");

}