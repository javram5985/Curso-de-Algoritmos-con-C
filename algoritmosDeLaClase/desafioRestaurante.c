#include <stdio.h>

int codigo, precio, cantidad;

void main()
{
    printf("\n---------------------\n");
    printf("Bienvenido a Ando\n");
    printf("---------------------\n");
    printf("Menu de Ando:\n");
    printf("1. Sopa de Tomate, precio: Q.30\n");
    printf("2. Pasta, precio: Q.60\n");
    printf("3. Pizza, precio: Q.55\n");
    printf("4. Gaseosa, precio: Q.8\n");
    printf("5. Pastel, precio: Q.25\n");
    printf("\n");
    printf("Escribe el codigo del Producto que quieres:\n");
    scanf("%d", &codigo);
    printf("---------------------\n");
    
    switch(codigo)
    {
        case 1:
        printf("Escogiste Sopa de Tomate\n");
        break;

        case 2:
        printf("Escogiste escogido Pasta\n");
        break;

        case 3:
        printf("Escogiste escogido Pizza\n");
        break;

        case 4:
        printf("Escogiste escogido Gaseosa\n");
        break;

        case 5:
        printf("Escogiste escogido Pastel\n");
        break;
        
        default:
        printf("No has escogido ningun producto.\n");
        break;

    }

    printf("\n");

    if(codigo >= 1 && codigo <=5)
    {
        printf("Escribe la cantidad que deseas comprar:\n");
        scanf("%d", &cantidad);
        printf("---------------------\n");
        if(cantidad != 0)
        {
            printf("Has escogido %d de ", cantidad);
            switch(codigo)
            {
                case 1:
                printf("Sopa de Tomate ");
                precio = 30;
                break;
                
                case 2:
                printf("Pasta ");
                precio = 60;
                break;

                case 3:
                printf("Pizza ");
                precio = 55;
                break;

                case 4:
                printf("Gaseosa ");
                precio = 8;
                break;

                case 5:
                printf("Pastel ");
                precio = 25;
                break;
            }
    
            if(codigo >= 1 && codigo <= 5)
            {
                int total = precio * cantidad;
                printf("y tu monto a pagar es de: %d\n", total);
            }
            else
            {
                printf("\n");
            }
        }
        else
        {
             printf("No has escogido ninguna cantidad. Hasta Pronto!\n");
        }
    }
    else
    {
        printf("Hasta Pronto!");  
    }  
}