//1. Create a class Vehicle having two private members
//(Vehicle number, owner name).
//2. Derive a class Two-wheeler having one private member
//(type i.e. scooter / bike etc.).
//3. Define functions accept & display in both the classes.
//4. Write a main function to accept details of ‘n’ two-wheeler objects
//(vehicle number, owner name, type.)

#include<iostream>

using namespace std;

class Vehicle
{
    private:
            int vnumber;
            string oname;

    public:

        void acceptvehicle()
        {
            cout<<"Enter vechile number";
            cin>>vnumber;
            cout<<"Enter owner name";
            cin>>oname;
        }

        void displayvehicle()
        {
            cout<<"vechile number is:\n"<<vnumber<<"\n";
            cout<<"owner name is:\n"<<oname<<"\n";
        }
};

class twowheel:public Vehicle
{
    private:
            int scooty,bike;

    public:
        void accepttype()
        {
            acceptvehicle();
            cout<<"Enter vechile type\n1)scooty\n2)bike";
            cin>>scooty;
        }

        void displaytype()
        {
            displayvehicle();
            if(scooty==1)
            {
                cout<<"vechile is:scooty\n";
            }
            else
            {
                cout<<"vechile is:bike\n";
            }
        }
};

int main()
{
    twowheel obj;

    obj.accepttype();
    obj.displaytype();

    return 0;


}