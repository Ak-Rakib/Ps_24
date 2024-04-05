#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 100)
    {
        printf("You will buy Biriyani for your sehri");
    }
    else
    {
        printf("Sorry! You haven't enough money");
    }
    return 0;
}