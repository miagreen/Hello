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

    }
    printf("%d\n", count);
    return 0;
}