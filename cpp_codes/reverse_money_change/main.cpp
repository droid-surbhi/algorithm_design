/* asks the user to enter an amount of money in the format of dollars and remaining cents and
 prints the minimum number of coins (quarters, dimes, nickels and pennies) that
 are equivalent to the given amount. */

#include <iostream>
using namespace std;

const int QUARTERS_IN_DOLLAR = 4;
const int QUARTERS_IN_CENT = 25;
const int DIMES_IN_CENT = 10;
const int NICKLES_IN_CENT = 5;

int main()
{
    int dollars, cents;
    int quarters, dimes, nickles, pennies;

    cout<<"Please enter the amount in dollars and cents: ";
    cin>>dollars>>cents;

    // 100 pennies = 20 nickels = 10 dimes = 4 quarters = 1 dollar = 100 cents
    quarters = dollars*QUARTERS_IN_DOLLAR + cents/QUARTERS_IN_CENT;
    cents = cents%QUARTERS_IN_CENT;
    dimes = cents/DIMES_IN_CENT;
    cents = cents%DIMES_IN_CENT;
    nickles = cents/NICKLES_IN_CENT;
    pennies = cents%NICKLES_IN_CENT;
    
    cout<<"The coins are "<<quarters<<" quarters, "<<dimes<<" dimes, "<<nickles<<" nickles and "<<pennies<<" pennies.";
    return 0;

}