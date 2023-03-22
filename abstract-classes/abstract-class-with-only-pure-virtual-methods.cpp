#include <iostream>
using namespace std;

// example of an abstract class with only pure virtual methods

// if a class contains a virtual method, the class is abstract
// abstract classes can have both virtual und non-virtual methods
// the virtual method has to be implemented in the derived class
// in order to become a non-abstract class

class Animal
{
public:
    virtual void makeSound() = 0;
    virtual void makeDieSound() = 0;
};

class Dog : public Animal
{
public:
    void makeSound()
    {
        cout << "Wuff wuff";
    }

    void makeDieSound()
    {
        cout << "Wuuuuuuufffffff";
    }
};

class Cat : public Animal
{
public:
    void makeSound()
    {
        cout << "Meow meow";
    }

    void makeDieSound()
    {
        cout << "Meeeeeoooooooowwwwwww";
    }
};

int main()
{
    Cat myCat;
    Dog myDog;

    myDog.makeSound();
    myDog.makeDieSound();

    myCat.makeSound();
    myCat.makeDieSound();
}