/* read a lowercase letter from the user and print it in uppercase */

#include <iostream>
using namespace std;

const int DIFF = 32;

int main()
{
    char lowerChar, upperChar;

    cout<<"Please enter an alphabet in lowercase: ";
    cin>>lowerChar;
    
    upperChar = lowerChar - DIFF;

    cout<<"uppercase letter: "<<upperChar<<endl;

    return 0;

}