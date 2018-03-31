#include <stdio.h>
#include <math.h>
#define Pi 3.14159 //Syntax for creating a constant in C

void main()
{
    int l = 10;
    int d = 20;
    float areaCuadrado,areaCirculo;
    float sumaAreas;
    int areaMayor;

    areaCuadrado = pow(l,2);
    areaCirculo = Pi * d;
    sumaAreas = areaCuadrado + areaCirculo;

    areaMayor = areaCuadrado > areaCirculo;

    printf("Area del Cuadrado: %f\n", areaCuadrado);
    printf("Area del Circulo: %f\n", areaCirculo);
    printf("Suma de Areas: %f\n", sumaAreas);
    printf("Cuadrado mayor a Circulo (0 = falso, 1 = verdadero): %d\n", areaMayor);
}