#include <iostream>
using namespace std;

// Encapsulation
class Marvellous
{
    // Access specifeir
public:
    int No1, No2; // characterstics

    void fun()
    {
        cout << "Inside fun\n"; // Behaviour
    }

    void gun() // Behaviour
    {
        cout << "Inside Gun\n";
    }
};

int main()
{
    // object creation(instance)
    Marvellous mobj1;
    Marvellous mobj2;

    cout << sizeof(mobj1) << "\n"; // 8

    cout << mobj1.No1 << "\n";

    mobj1.fun();
    mobj2.fun();
     

        return 0;
}