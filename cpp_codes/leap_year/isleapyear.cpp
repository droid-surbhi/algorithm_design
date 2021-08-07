/* identify if given year is leap year or not */

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    string year_s(argv[1]);
    int year = stoi(year_s);

    if (year%400 == 0)
        cout<<year<<" was a leap year";
    else if (year%100==0)
        cout<<year<<" was not a leap year";
    else if (year%4 ==0)
        cout<<year<<" was a leap year";
    else
        cout<<year<<" was not a leap year";
    return 0;
}
