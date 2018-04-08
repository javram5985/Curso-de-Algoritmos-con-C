#include <stdio.h>

int main()
{

    int arr1[50];
    int arr2[50];
    int n = 2;
    int i;

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }

    if(arr1[0] < arr2[1] && arr1[1] > arr2[1] || arr1[0] == arr2[1] && arr1[1] == arr2[1] || arr1[0] > arr2[1] && arr1[1] < arr2[1] )
    {
        printf("YES");
    }

    else
    {
        printf("NO");
    }

}