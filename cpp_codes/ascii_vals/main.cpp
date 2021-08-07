/* print ascii value of a character */

#include <iostream>
using namespace std;

int main()
{
    char inputChar;
    int asciiVal;

    cout<<"Enter the character"<<endl;
    cin>>inputChar;

    asciiVal = inputChar;
    cout<<"ASCII value for the character "<<inputChar<<" is "<<asciiVal<<endl;

    return 0;
}