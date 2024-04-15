#include <stdio.h>
int main()
{
    int A, B, C;
    scanf("%d%d%d", &A, &B, &C);
    // Min
    if (A <= B && A <= C)
    {
        printf("%d ", A);
    }
    else if (B <= C && B <= A)
    {
        printf("%d ", B);
    } else {
        printf("%d ", C);
    }

    // Max
    if (A >= B && A >= C)
    {
        printf("%d", A);
    }
    else if (B >= C && B >= A)
    {
        printf("%d", B);
    } else {
        printf("%d", C);
    }
    return 0;
}