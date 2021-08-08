/* The greatest common divisor of integers x and y is the largest integer that evenly divides both x and y.
 Write a recursive function named gcd that returns the greatest common divisor of x and y. 
 The gcd of x and y is defined recursively as follows: If y is equal to 0, then gcd(x,y) is x;
 otherwise gcd(x,y) is gcd(y,x%y) where % is remainder operator.

 Here is an example call to the function

 cout << gcd(15,5);

 This example would print the number 5. */


#include <iostream>
using namespace std;
int gcd(int x, int y);

int main(){
    int x, y, res;
    cout<<"Please enter 2 integers: ";
    cin>>x>>y;
    res = gcd(x, y);
    cout<<res<<"is the gcd for "<<x<<" and "<<y;
    return 0;
}

int gcd(int x, int y){
    if (y==0){
        return x;
    }
    return gcd(y, x%y);
}