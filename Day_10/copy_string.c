#include<stdio.h>
#include<string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s",a,b);

    // using building function for copying string "strcpy()"
    strcpy(a,b);
    printf("%s %s",a,b); 
    

    // Below this process logically
    // for(int i = 0; i <= strlen(a); i++){
    //     a[i] = b[i];
    // }
    // printf("%s %s", a,b);
    return 0;
}