#include <vector>
#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
public:
	bool isFast = false;
	virtual void drive() = 0;
};

class Car : public Vehicle
{
public:
	Car()
	{
		isFast = true;
	}
	void drive()
	{
		cout << "I drive by car" << endl;
	}
};

class Bicycle : public Vehicle
{
public:
	Bicycle()
	{
		isFast = false;
	}
	void drive()
	{
		cout << "I drive by bike" << endl;
	}
};

class City
{
private:
	// must be a pointer because Vehicle is abstract
	vector<Vehicle *> vehicles;

public:
	vector<Vehicle *> getVehicles()
	{
		return this->vehicles;
	}
	City(int amountCars, int amountBicycles)
	{
		for (int i = 0; i < amountCars; i++)
		{
			Car *car = new Car();
			vehicles.push_back(car);
		}
		for (int i = 0; i < amountBicycles; i++)
		{
			Bicycle *bicycle = new Bicycle();
			vehicles.push_back(bicycle);
		}
	}
};

int main()
{

	City city(8, 2);
	vector<Vehicle *> vehicles = city.getVehicles();

	cout << "Size of vehicles: " << vehicles.size() << endl;

	for (int i = 0; i < vehicles.size(); i++)
	{
		cout << "Is fast: " << vehicles[i]->isFast << endl;
	}

	// two possibilities to access element at specific index
	// either
	Vehicle *fifthVehicle = vehicles.at(5);
	// or
	Vehicle *sixthVehicle = vehicles[6];
	fifthVehicle->drive();
	sixthVehicle->drive();

	// removes last element
	vehicles.pop_back();
	vehicles.pop_back();

	cout << "Size of vehicles: " << vehicles.size() << endl;

	// define vector with a specific size
	vector<Car> myCarVec(20);

	for (int i = 0; i < myCarVec.size(); i++)
	{
		// creates cars with default constructor
		cout << "Is fast: " << myCarVec[i].isFast << endl;
	}

	// erase 19th car
	cout << "Car vector size: " << myCarVec.size() << endl;
	myCarVec.erase(myCarVec.begin() + 19);
	cout << "Car vector size: " << myCarVec.size() << endl;
}
