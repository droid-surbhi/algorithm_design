/* given weight and height, calculate bmi */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float weight, height;
    float bmi;

    cout<<"Please enter weight in kilograms: ";
    cin>>weight;
    cout<<"Please enter height in metres: ";
    cin>>height;

    bmi = weight/(height*height);

    cout<<"BMI is: "<<fixed<<setprecision(2)<<bmi;

    return 0;
}