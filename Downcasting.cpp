#include <iostream>

using namespace std;

class Base
{
public:
    int i, j;

}; // 8Byte

class Derived : Base
{
public:
    int x, y;

}; // 16Byte

int main()
{
    Derived *dp=NULL;
    Base dobj;

    dp = &dobj;

    return 0;
}