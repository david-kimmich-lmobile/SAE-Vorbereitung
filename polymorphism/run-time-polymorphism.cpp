#include <vector>
#include <iostream>
using namespace std;

class Vehicle
{
public:
	void doBreak()
	{
		cout << "Vehicle breaks" << endl;
	}
	virtual void drive() = 0;
};

class Car : public Vehicle
{
public:
	void drive()
	{
		cout << "I drive by car" << endl;
	}
	void doBreak()
	{
		Vehicle::doBreak();
		cout << "Car breaks" << endl;
	}
};

class Bicycle : public Vehicle
{
public:
	void drive()
	{
		cout << "I drive by bike" << endl;
	}
};

int main()
{
	Car car;
	car.drive();
	car.doBreak();

	Bicycle bicycle;
	bicycle.drive();
}