#include <stdio.h>
int main()
{
    int n;
    scanf("%c", &n);
    if (n == 'z')
    {
        printf("%c", 'a');
    }
    else
    {
        int value = n + 1;
        printf("%c", value);
    }
    return 0;
}