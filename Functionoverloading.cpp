#include <iostream>
using namespace std;

class Hello
{
public:
    int Additiontwo(int a, int b)
    {
        return a + b;
    }

    int Additionthree(int a, int b, int c)
    {
        return a + b + c;
    }

    int Additionfour(int a, int b, int c, int d)
    {
        return a + b + c + d;
    }
};

int main()
{
    Hello hobj;

    cout << hobj.Additiontwo(10, 20) << "\n";
    cout << hobj.Additionthree(10, 20, 30) << "\n";
    cout << hobj.Additionfour(10, 20, 30, 40) << "\n";

    return 0;
}