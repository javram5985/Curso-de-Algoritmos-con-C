#include <stdio.h>

int main()
{
    int n, arr[1000], i, d, temp;

    printf("Ingresa el numero de elementos para el arreglo: \n");
    scanf("%d", &n);

    printf("Ingresa los numeros del arreglo: \n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 1; i <= n - 1; i++)
    {
        d = i;
        
        while(d > 0 && arr[d-1] > arr[d])
        {
            temp = arr[d];
            arr[d] = arr[d-1];
            arr[d -1] = temp;

            d--;
        }
    }
    
    printf("Arreglo ordenado con numeros ascendientes: \n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}