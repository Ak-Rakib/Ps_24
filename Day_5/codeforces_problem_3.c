#include<stdio.h>
int main()
{
    char x;
    scanf("%c", &x);
    if(x >= 'a' && x <= 'z'){
        int upper = x - 32;
        printf("%c", upper);
    } else {
        int lower = x + 32;
        printf("%c", lower);
    }
    return 0;
}