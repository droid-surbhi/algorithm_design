/* calculate area of a circle, given the radius */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float radius;
    float area;

    cout<<"Enter the radius of the circle"<<endl;
    cin>>radius;

    area = M_PI * radius*radius;
    cout<<"Area of the circle is: "<<area<<endl;
    return 0;
}