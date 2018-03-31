#include <stdio.h>
#define k 9
#define m 2
float x;
float aux;
float f;

void main()
{

    printf("Introduzca el valor de x:\n");
    scanf("%f", &x);

    aux = k*(x-m)*(x-m);
    f = aux/(1+aux);

    printf("El resultado de f es: %f\n", f);

}