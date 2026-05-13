#include <iostream>
using namespace std;

// Encapsulation
class Marvellous
{
    // Access specifeir
public:
    int No1, No2; // characterstics

    // default constructor
    Marvellous()
    {
        cout << "default constructor\n";
        No1 = 0;
        No2 = 0;
    }

    // PRAMATRIC CONSTRUCTUR
    Marvellous(int A, int B)
    {
        cout << "default constructor\n";
        No1 = A;
        No2 = B;
    }
 
    // copy constructor
    Marvellous(Marvellous &ref)
    {
        cout << "inside copy constructor\n";
    }

    // destructor
    ~Marvellous()
    {
        cout << "inside destructor\n";
    }
};

int main()
{
    cout << "inside main\n";
    Marvellous mobj1;         // default constructer object
    Marvellous mobj2(11, 21); // Parametrised constructer object
    Marvellous mobj3(mobj2);  // copy constructer object
    cout << "end of main\n";

    return 0;
} // all destrucotors gets called