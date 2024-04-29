#include<stdio.h>
int main()
{
    char a[6];
    // address already define, that's why we can't take "&" sign behind a.
    scanf("%s", a);
    printf("%s\n", a);
    return 0;
}