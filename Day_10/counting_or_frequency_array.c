#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int a[13] = {0};
    for(int i = 0; i < n; i++){
        int val = arr[i];
        a[val]++;
    }

    for(int i = 0; i < n; i++){
        printf("%d - %d\n",i,a[i]);
    }
    return 0;
}