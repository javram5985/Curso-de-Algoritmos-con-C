#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    long long int arr[50], n, i;
    long long int sum = 0;

    printf("Ingresa el numero de elementos para el arreglo:\n");
    scanf("%lld", &n);
    printf("Ingresa los numeros del arreglo:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

   for(i = 0; i < n; i++)
   {
       sum = sum + arr[i];
   }
   printf("%lld", sum);

   return 0;

}