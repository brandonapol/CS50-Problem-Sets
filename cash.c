//A greedy algorithm to return the lowest number of coins required to pay a 
//user-submitted amount of change for a financial transaction.

//This is where I add my libraries. Requires Harvard's CS50 library.
#include <cs50.h>
#include <stdio.h>
#include <math.h>

//Initial function
int main()
{
    float  amount = 0;
    while (amount <= 0)
    {
        amount = get_float("Change owed: \n");
    }

//defined variables

    float floatcoins = round(amount * 100);
    int check_coins = (int)floatcoins;
    int quarters = (check_coins - check_coins % 25) / 25;
    int quarter_rem = (check_coins % 25);
    int dimes = (quarter_rem - quarter_rem % 10) / 10;
    int dime_rem = (quarter_rem % 10);
    int nickels = (dime_rem - dime_rem % 5) / 5;
    int nickel_rem = dime_rem % 5;
    int coins = quarters + dimes + nickels + nickel_rem;

    printf("%i\n", coins);
}