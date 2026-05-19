
#include<iostream>

namespace Marvellous
{
    int no=11;

    void fun()
    {
        std::cout<<"inside marvellous\n";
    }
}

using namespace Marvellous;
int main()
{
    std::cout<<"jay ganesh\n";

    fun(); 

    return 0;
}