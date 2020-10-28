//This is where I add my libraries
#include <cs50.h>
#include <stdio.h>

//Initial function
int main()
{
    int n = 0;
    do
    {
        n = get_int("Height: \n");
    }
    while (n < 1 || n > 8);

//Outer loop
    for (int i = 1;
         i <= n;
         i++)
    {
        //inner loop
        for (int j = n;
             j > i;
             j--)
        {
            printf(" ");
        }

        for (int j = 1;
             j <= i;
             j++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}