#include <stdio.h>

void main()
{
    int a,b,c,x,y,z;

    y = 3+3*8;
    z = 3/3;
    a = 3+(10/2)-5*(4*2);
    b = 5;
    c = 10;

    x = b>c;

    printf("El resultado de la operacion 1 es: %d\n",x); //\n para hacer salto de parrafo
    printf("El resultado de la operacion 2 es: %d\n",y);
    printf("El resultado de la operacion 3 es: %d\n",z);
    printf("El resultado de la operacion 4 es: %d\n",a);
}