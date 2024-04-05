#include<stdio.h>
int main()
{
    int a,b;
    // Facing problem below this line
    // Solve: same value write in input field
    scanf("%da %db",&a,&b);
    // scanf("%da", &a);
    // scanf("%db", &b);

    printf("%da %db",a,b);
    return 0;
}