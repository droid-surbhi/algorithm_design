/* given an integer, create an array. Make a loop that fills in each array entry
with the value of the element number (starting with 1) divided by 3s */

#include <iostream>
using namespace std;
double* getDoubles(int numDoubles);

int main()
{
    int arraySize;
    cout<<"Please enter the array size: ";
    cin>>arraySize;
    double *ptr = getDoubles(arraySize);
    for (int i=0; i<arraySize; i++)
    {
        cout<<ptr[i]<<" ";
    }
    return 0;
}

double* getDoubles(int numDoubles)
{
    double *ptr = new double [numDoubles];
    for (int i=0; i<numDoubles; i++)
    {
        ptr[i] = (i+1)/3.0;
    }
    return ptr;
}
