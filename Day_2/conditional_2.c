#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    if (num >= 80 && num <= 100)
    {
        printf("You Got A+");
    }
    else if (num <= 79 && num >= 60)
    {
        printf("You Got A");
    }
    else if (num <= 59 && num >= 40)
    {
        printf("You Got A-");
    }
    else
    {
        printf("You Faild");
    }
    return 0;
}