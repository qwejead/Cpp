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

    void gun()
    {
        cout << "inside base gun\n";
    }

    void sun()
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
        cout << "inside base sun\n";
    }

    void run() // difination
    {
        cout << "inside base run\n";
    }

}; // 16Byte

int main()
{
    cout << sizeof(Base) << "\n";    // 8
    cout << sizeof(Derived) << "\n"; // 16

    return 0;
}