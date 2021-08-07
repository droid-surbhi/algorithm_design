/* asks the user to enter a number of quarters, dimes, nickels and pennies and
 then outputs the monetary value of the coins in the format of dollars and remaining cents. */

#include <iostream>
using namespace std;

const int PENNIES_IN_NICKLE = 5;
const int PENNIES_IN_DIME = 10;
const int PENNIES_IN_QUARTER = 25;
const int PENNIES_IN_DOLLAR = 100;

int main()
{
    int quarters, pennies, dimes, nickles;
    int outDollars, outCents;
    int totalPennies;

    // 100 pennies = 20 nickels = 10 dimes = 4 quarters = 1 dollar = 100 cents
    cout<<"Please enter the number of coins:"<<endl;
    cout<<"# of quarters: ";
    cin>>quarters;
    cout<<"# of dimes: ";
    cin>>dimes;
    cout<<"# of nickles: ";
    cin>>nickles;
    cout<<"# of pennies: ";
    cin>>pennies;

    totalPennies = pennies + PENNIES_IN_QUARTER*quarters + PENNIES_IN_DIME*dimes + PENNIES_IN_NICKLE*nickles;
    outDollars = totalPennies/PENNIES_IN_DOLLAR;
    outCents = totalPennies%PENNIES_IN_DOLLAR;

    cout<<"The total is "<<outDollars<<" dollars and "<<outCents<<" cents.";
    return 0;

}