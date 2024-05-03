#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int max = a[0];
    int min = a[0];
    int max_index = 0;
    int min_index = 0;

    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            max_index = i;
        }
        if (a[i] < min)
        {
            min = a[i];
            min_index = i;
        }
    }

    int tem = a[max_index];
    a[max_index] = a[min_index];
    a[min_index] = tem;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    // printf("%d - %d\n", max, max_index);
    // printf("%d - %d\n", min, min_index);
    return 0;
}