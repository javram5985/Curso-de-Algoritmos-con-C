#include <stdio.h>

void main()
{
    int n;
    int sum = 0;
    scanf("%d", &n);
    int arr[n];

    for(int arr_i = 0; arr_i < n; arr_i++)
    {
        scanf("%d", &arr[arr_i]);
    }
    for(int arr_i = 0; arr_i < n; arr_i++)
    {
        sum += arr[arr_i];
    }
    printf("%d", sum);
    
}