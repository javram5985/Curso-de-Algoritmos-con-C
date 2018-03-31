// Esta es una tienda que vende productos de Platzi

#include <stdio.h>
#include <string.h>

char opcion[8];
int gorras, termo, playera, tasa;
int totalGorras = 0;
int totalTermo = 0;
int totalPlayera = 0;
int totalTasa = 0;
int seguirComprando = 1;
int total;

void main()
{
    while(seguirComprando == 1)
    {
        printf("Elije el producto que buscas:\n");
        printf("Ingrese gorra para comprar una\n");
        printf("Ingrese termo para comprar uno\n");
        printf("Ingrese playera para comprar una\n");
        printf("Ingrese tasa para comprar una\n");
        printf("Si deseas salir ingresa salir\n");
        scanf("%s", opcion);

        if(strcmp(opcion, "gorra") == 0)
        {
            printf("Cada gorra cuesta 5 usd, cuantas deseas comprar?\n");
            scanf("%d", &gorras);
            totalGorras = totalGorras + (gorras * 5);
            printf("Su total por la compra de gorras es: %d usd\n", totalGorras);
        }
        else if(strcmp(opcion, "termo") == 0)
        {
            printf("Cada termo cuesta 10 usd, cuantas deseas comprar?\n");
            scanf("%d", &termo);
            totalTermo = totalTermo + (termo * 10);
            printf("Su total por la compra de gorras es: %d usd\n", totalTermo);
        }
        else if(strcmp(opcion, "playera") == 0)
        {
            printf("Cada payera cuesta 2 usd, cuantas deseas comprar?\n");
            scanf("%d", &playera);
            totalPlayera = totalPlayera + (playera * 2);
            printf("Su total por la compra de gorras es: %d usd\n", totalPlayera);
        }
        else if(strcmp(opcion, "tasa") == 0)
        {
            printf("Cada tasa cuesta 5 usd, cuantas deseas comprar?\n");
            scanf("%d", &tasa);
            totalTasa = totalTasa + (tasa * 5);
            printf("Su total por la compra de gorras es: %d usd\n", totalTasa);
        }
        else if(strcmp(opcion, "salir") == 0)
        {
            printf("Gracias por visitarnos\n");
            total = totalGorras + totalPlayera + totalTasa + totalTermo;
            printf("Tu total es de: %d usd\n", total);
            seguirComprando = 2;
        }
        else
        {
            printf("El producto especificado no existe, prueba otra opcion.\n");
            printf("En caso de querer otro producto, precione 1 o si desea salir precione cualquier otro numero\n");
            scanf("%d", &seguirComprando);
        }
        printf("Gracias por comprar\n");
    }
}