#include <stdio.h>
#include <string.h>
int main()
{
    char a[18];
    // building function that's why i use line no:2
    // null = "\0"
    // gets(a);
    fgets(a, 5, stdin);
    printf("%s", a);
    return 0;
}