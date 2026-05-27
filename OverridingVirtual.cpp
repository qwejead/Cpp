#include <iostream>

using namespace std;

class Base
{
public:
    int i, j;

    void fun()
    {
        cout << "inside base fun\n";
    }

    virtual void gun()
    {
        cout << "inside base gun\n";
    }

    virtual void sun()
    {
        cout << "inside base sun\n";
    }

}; // 8Byte

class Derived : public Base
{
public:
    int x, y;

    void fun() // Redifination
    {
        cout << "inside base fun\n";
    }

    void sun() // Redifination
    {
        cout << "inside derived sun\n";
    }

    virtual void run() // difination
    {
        cout << "inside base run\n";
    }

}; // 16Byte

int main()
{
    Base *bp = new Derived(); // upcasting
    bp->fun();                // Base fun
    bp->gun();                // Base gun
    bp->sun();                // Derived sun
    //bp->run();                //Error

    return 0;
}