#include <iostream>
using namespace std;

class Demo
{

public:
    int i;        // non static
    int j;        // non static
    static int k; // static

    Demo()
    {
        i = 0;
        j = 0;
    }

    void Fun() // non static method
    {
        cout << "Inside nonstatic fun \n";
        cout << "i:" << i << "\n";
        cout << "j:" << j << "\n";
        cout << "k:" << k << "\n";
    }

    static void Gun() // static method
    {
        cout << "Inside static Gun \n";
        cout << "i:" << k << "\n";
    }
};

int Demo::k = 11;

int main()
{

    cout << Demo::k << "\n"; // 11

    Demo::Gun();
    Demo dobj;

    cout << dobj.i << "\n"; // 0
    cout << dobj.j << "\n"; // 0

    dobj.Fun();

    return 0;
}