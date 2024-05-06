#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);

    // Use building function for lexicographical compare "strcmp()"
    int value = strcmp(a,b);
    // printf("%d ",value);

    if(value > 0){
        printf("A is getter then B");
    } else if(value == 0){
        printf("A and B same");
    } else {
        printf("B is getter then A");
    }


    // Below this code is logical
    // int i = 0;
    // while (1)
    // {
    //     if (a[i] == '\0' && b[i] == '\0')
    //     {
    //         printf("A and B same\n");
    //         break;
    //     }
    //     else if (a[i] > b[i])
    //     {
    //         printf("A is getter then B\n");
    //         break;
    //     }
    //     else if (a[i] < b[i])
    //     {
    //         printf("B is getter then A\n");
    //         break;
    //     }

    //     if (a[i] == b[i])
    //     {
    //         i++;
    //     }
    //     else if (a[i] > b[i])
    //     {
    //         printf("A is getter B\n");
    //         break;
    //     }
    //     else
    //     {
    //         printf("B is getter then A\n");
    //         break;
    //     }
    // }

    return 0;
}