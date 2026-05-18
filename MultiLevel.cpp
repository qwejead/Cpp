#include <iostream>
using namespace std;

class Base
{
public:
    int i, j;

    Base()
    {
        cout << "Inside base constructor\n";
        i = 0;
        j = 0;
    }

    ~Base()
    {
        cout << "Inside Base distructor\n";
    }

    void fun()
    {
        cout << "Inside Base Fun\n";
    }
};

class Derived : public Base
{
public:
    int x;

    Derived()
    {
        cout << "Inside Derived constructor\n";
        x = 0;
    }

    ~Derived()
    {
        cout << "Inside Derived Distructor\n";
    }

    void gun()
    {
        cout << "Inside gun of derived\n";
    }
};

class DerivedX : public Derived
{
public:
    int y;

    DerivedX()
    {
        cout << "Inside derivedx constructor\n";
        y = 0;
    }

    ~DerivedX()
    {
        cout << "Inside derivedx distructor\n";
    }

    void sun()
    {
        cout << "Inside DerivedX sun\n";
    }
};

int main()
{
    cout << "Inside main\n";

    DerivedX dobj;

    cout << "Size of Base class objest is:" << sizeof(Base) << "\n"; // 8

    cout << "Size of Derived class objest is:" << sizeof(Derived) << "\n"; // 12
    
    cout << "Size of DerivedX class objest is:" << sizeof(DerivedX) << "\n"; // 16


    cout << dobj.i << "\n"; // 0
    cout << dobj.j << "\n"; // 0
    cout << dobj.x << "\n"; // 0
    cout << dobj.y << "\n"; // 0

    dobj.fun();
    dobj.gun();
    dobj.sun();

    cout << "End of main\n";

    return 0;
}
