/* print fibonacci series upto given number */

#include <iostream>
using namespace std;

int main()
{
    int num, prev, curr, temp;
    cout<<"Please enter an integer greater than 1: ";
    cin>>num;
    curr = 0;
    prev = 1;
    for (int i=1; i<=num; i++){
        temp = curr;
        curr+=prev;
        cout<<curr<<" ";
        prev = temp;
    }

    return 0;
}