#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000000];
    scanf("%s", s);
    int len = strlen(s);
    int sum = 0;
    for(int i = 0; i < len; i++){
        sum = sum + (s[i]-'0');
        // printf("%d\n", s[i]-'0');
        // printf("%c\n", s[i]);
    }
    printf("%d", sum);
    // printf("%d", len);
    return 0;
}