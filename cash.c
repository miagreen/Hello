#include<cs50.h>
#include<math.h>
#include<stdio.h>
int main()
{
    float dollars;
    do
    {
        dollars = get_float("Dollars: ");
    }while(dollars < 0);
    int cents = round(dollars * 100);
    int count = 0;
    while(cents > 0)
    {
        if(cents >= 25)
        {
            count = count + (cents/25);
            cents = cents % 25;
        }
        else if(cents >= 10)
        {
            count = count + (cents / 10);
            cents = cents % 10;
        }
        else if (cents >= 5)
        {
            count = count + (cents / 5);
            cents = cents % 5;
        }
        else if(cents >=1)
        {
            count = count + (cents / 1);
            cents = cents % 1;
        }
        // printf("%d\n", cents);
    }
    printf("%d\n", count);
    return 0;
}