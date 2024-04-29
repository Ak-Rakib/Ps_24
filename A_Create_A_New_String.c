#include<stdio.h>
int main()
{
    char s[1000];
    scanf("%s", s);
    char t[1000];
    scanf("%s", t);
    int count_s = 0;
    int count_t = 0;

    for(int i = 0; s[i] != '\0'; i++){
        count_s++;
    }

    for(int i = 0; t[i] != '\0'; i++){
        count_t++;
    }

    printf("%d ", count_s);
    printf("%d\n", count_t);
    printf("%s %s", s,t);

    return 0;
}