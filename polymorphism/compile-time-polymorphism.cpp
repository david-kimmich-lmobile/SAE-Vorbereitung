#include <vector>
#include <iostream>
using namespace std;

class Car
{
public:
	void drive()
	{
		cout << "I drive" << endl;
	}
	void drive(string owner)
	{
		cout << "I drive by car ( " << owner << " )" << endl;
	}
	void drive(string owner, string hooker)
	{
		cout << "I drive by car ( " << owner << " ) with a hooker: " << hooker << endl;
	}
};

int main()
{
	Car car;
	car.drive();
	car.drive("David Kimmich");
	car.drive("David Kimmich", "Larissa");
};