#include <iostream>
using namespace std;

// example of an abstract class with both pure virtual and normal methods

class Animal
{
public:
    void attack()
    {
        cout << "Animal is attacking" << endl;
    }
    virtual void makeSound() = 0;
    virtual void makeDieSound() = 0;
};

class Dog : public Animal
{
public:
    void makeSound()
    {
        cout << "Wuff wuff" << endl;
    }

    void makeDieSound()
    {
        cout << "Wuuuuuuufffffff" << endl;
    }
    void attack()
    {
        // attack method of base class is overridden, but can be invoked to reach extension
        // categorized under "dynamic polymorphism" --> "method overriding"
        Animal::attack();
        cout << "Doggo is attacking" << endl;
    }
};

class Cat : public Animal
{
public:
    void makeSound()
    {
        cout << "Meow meow" << endl;
    }

    void makeDieSound()
    {
        cout << "Meeeeeoooooooowwwwwww" << endl;
    }

    void attack()
    {
        // method is simply overridden
        cout << "Cat is attacking" << endl;
    }
};

class Bird : public Animal
{
public:
    void makeSound()
    {
        cout << "Piep piep" << endl;
    }

    void makeDieSound()
    {
        cout << "Piieeeeeeeeeep" << endl;
    }

    // no attack method here
    // attack method if base class is used then
};

int main()
{
    Cat myCat;
    Dog myDog;
    Bird myBird;

    myDog.attack();
    cout << endl;
    myCat.attack();
    cout << endl;
    myBird.attack();
}