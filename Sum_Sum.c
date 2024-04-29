#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int sum = 0;
    int add = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            sum = sum + arr[i];
        }
        // printf("%d ", sum);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            add = add + arr[i];
        }
        // printf("%d ", sum);
    }
    printf("%d ", sum);
    printf("%d ", add);
    return 0;
}