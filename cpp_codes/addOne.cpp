/* add one to givrn integer using pointer */

#include <iostream>
using namespace std;
void addOne(int *ptrNum);

int main()
{
    int inpInt;
    int * ptr = &inpInt;
    cout<<"Please enter an integer: ";
    cin>>inpInt;
    addOne(ptr);
    cout<<" Incremented value is "<<* ptr;
    return 0;
}

void addOne(int *ptrNum)
{
    *ptrNum = *ptrNum+1;
}