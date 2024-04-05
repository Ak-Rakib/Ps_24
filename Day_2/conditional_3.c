#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 5000)
    {
        printf("Cox's Bazar jabo \n");
        if (tk >= 10000)
        {
            printf("Saint martin Jabo");
        }
        else
        {
            printf("Cox's Bazar theke ferot chole ashbo");
        }
    }
    else
    {
        printf("You haven't enough money to going cox's bazar");
    }
    return 0;
}