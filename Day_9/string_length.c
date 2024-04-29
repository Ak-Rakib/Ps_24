#include<stdio.h>
int main()
{
    // also you can find out string length using building function "strlen()"
    // char name[5] = "Rakib";
    char name[100];
    scanf("%s", name);
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    printf("%d\n", count);
    return 0;
}