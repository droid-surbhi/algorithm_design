/* given number of days of travelling, print number of weeks and days */

#include <iostream>
using namespace std;

const int DAYS_IN_A_WEEK = 7;
int main()
{
    int numDays;
    int weeks;
    int remainDays;

    cout<<"Enter number of days travelled"<<endl;
    cin>>numDays;
    weeks = numDays / DAYS_IN_A_WEEK;
    remainDays = numDays % DAYS_IN_A_WEEK;
    cout<<"travelled "<<weeks<<" weeks and "<<remainDays<<" days"<<endl;
    return 0;
}