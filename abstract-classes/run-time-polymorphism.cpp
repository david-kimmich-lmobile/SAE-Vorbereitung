#include <vector>
#include <iostream>
using namespace std;

class Vehicle
{
public:
	virtual void drive() = 0;
};

class Car : public Vehicle
{
public:
	void drive()
	{
		cout << "I drive by car" << endl;
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

	Bicycle bicycle;
	bicycle.drive();
}