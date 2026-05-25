//For that create a class names BMI with two data members weight (kg) and
//height (In Meter). Write a function to calculate BMI as BMI=weight/
//(height) 2
//.
//2. The class has two constructors which are:
//i. Values of both weight and height are assigned zero. (default constructor)
//ii. Two numbers are assigned as the values of both weight and height.
//(Parameterized)
//3. Now, create objects of the 'BMI' class having none and two parameters and
//write a function to calculate and print their BMI value.
//4. Create destructor which will be automatically executed and will print
//message as ‘Memory Free…!’ when program ends.
#include <iostream>
using namespace std;

class BMI
{
private:
    float weight;   // in kg
    float height;   // in meters

public:
    // Default Constructor
    BMI()
    {
        weight = 0;
        height = 0;
    }

    // Parameterized Constructor
    BMI(float w, float h)
    {
        weight = w;
        height = h;
    }

    // Function to calculate and display BMI
    void CalculateBMI()
    {
        if(height <= 0)
        {
            cout << "Invalid height! Cannot calculate BMI." << endl;
            return;
        }

        float bmi = weight / (height * height);
        cout << "Weight: " << weight << " kg, Height: " << height << " m" << endl;
        cout << "BMI = " << bmi << endl << endl;
    }

    // Destructor
    ~BMI()
    {
        cout << "Memory Free...!" << endl;
    }
};

int main()
{
    // Object using default constructor
    BMI obj1;
    cout << "Default Object:" << endl;
    obj1.CalculateBMI();

    // Object using parameterized constructor
    BMI obj2(70, 1.75);
    cout << "Parameterized Object:" << endl;
    obj2.CalculateBMI();

    return 0;
}