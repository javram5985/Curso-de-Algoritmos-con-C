#include <stdio.h>

void main()
{

    int numero = 5;
    float numeroFloat;
    char c;

    printf("Ingresa una letra.");
    scanf("%c", &c); //para que el usuario escriba en la consola
    printf("Ingresa un numero real.");
    scanf("%f", &numeroFloat);
    printf("La letra ingresada es: %c, el numero vale: %d y el numero real que ingresaste es: %f\n", c, numero, numeroFloat);
}