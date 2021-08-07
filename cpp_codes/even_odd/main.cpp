/* this program inputs four numbers separated by spaces.  It then count how many odd and even numbers there are. 
The program should then output one of three possibilities depending on how many even and odd numbers are entered:
more evens/more odds/same number of evens and odds */

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, num4;
    int numOdd = 0;
    int numEven = 0;

    cout<<"Please enter 4 integers: ";
    cin>>num1>>num2>>num3>>num4;

    if (num1%2 == 0)
        ++numEven;
    else
        ++numOdd;
    
    if (num2%2 == 0)
        ++numEven;
    else
        ++numOdd;
    if (num3%2 == 0)
        ++numEven;
    else
        ++numOdd;
    if (num4%2 == 0)
        ++numEven;
    else
        ++numOdd;
    
    if (numEven > numOdd)
        cout<<"more evens";
    else if (numOdd > numEven)
        cout<<"more odds";
    else cout<<"same number of evens and odds";

    return 0;
}
