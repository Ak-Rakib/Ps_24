#include<stdio.h>
#include<string.h>
int main()
{
    char a[200], b[100];
    scanf("%s %s", a,b);
    strcat(a,b);
    printf("%s %s", a,b);

    // below this logically
    // int k = strlen(a);
    // for(int j = 0; j <= strlen(b); j++){
    //     a[k] = b[j];
    //     k++;
    // }
    // printf("%s %s",a,b);
    return 0;
}