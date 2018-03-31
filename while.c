#include <stdio.h>

void main()
{
    int decision = 1;
    int incrementador = 0;

    while(decision == 1)
    {
        incrementador++;
        printf("Ejecucion numero %d\n", incrementador);
        printf("Si desea continuar presione 1 o cualquier otro para salir\n");
        scanf("%d", &decision);
    }
    printf("Gracias por usar el codigo\n");
}