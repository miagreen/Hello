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
    int coins[4] = {25, 10, 5, 1};
    int count = 0;
    for(int i = 0; i < 4; i ++)
    {
        if(cents >= coins[i])
        {
            count = count + cents / coins[i];
            cents = cents % coins[i];
        }
    }
    printf("%d\n", count);
    return 0;
}