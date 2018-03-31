#include <stdio.h>
#define G 6.674
float m1, m2;
float r;
float F;

void main()
{
    printf("Ingresa la masa del cuerpo 1:\n");
    scanf("%f", &m1);
    printf("Ingresa la masa del cuerpo 2:\n");
    scanf("%f", &m2);
    printf("Ingresa la distancia:\n");
    scanf("%f", &r);

    F = G*((m1*m2)/(r*r));

    printf("El resultado de F es: %f\n", F);

}
