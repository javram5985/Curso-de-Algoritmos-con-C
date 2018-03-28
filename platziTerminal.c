#include <stdio.h>
#include <string.h>
//strcmp https://www.tutorialspoint.com/c_standard_library/c_function_strcmp.htm
void main()
{

    char userName[25]; //Arreglo de 25 posiciones, el nombre no puede ser mayor a 25 caracteres
    int decision;
    int bucle = 1;

while(bucle == 1)
{
    int estudiando = 1;
    printf("Bienvenidos a Platzi Terminal\n");
    printf("Ingresa tu nombre de usuario\n");
    scanf("%s", userName);

    printf("Bienvenido %s, vamos a acceder a tu seccion\n", userName);

    if(strcmp(userName,"Julian") == 0)
    {
        while(estudiando == 1)
        {
            printf("Esto es Platzi Terminal Free edition, que deseas hacer?\n");
            printf("Ingrese 1 para estudiar, \n2 para leer el blog y \ncualquier otro valor para salir\n");
            scanf("%d", &decision);
            if(decision == 1)
            {
                printf("Estas en la seccion de estudio, sacale el maximo provecho\n");
            }
            else if(decision == 2)
            {
                printf("Estas en el blog, aprovechalo\n");
            }
            else
            {
                printf("Adios\n");
                estudiando = 2;
            }
        }

    }
    else if(strcmp(userName,"Juliana") == 0)
    {
        while(estudiando == 1)
        {
            printf("Esto es Platzi Terminal Standard edition, que deseas hacer?\n");
            printf("Ingrese 1 para estudiar, \n2 para leer el blog y \ncualquier otro valor para salir\n");
            scanf("%d", &decision);
            if(decision == 1)
            {
                printf("Estas en la seccion de estudio, sacale el maximo provecho\n");
            }
            else if(decision == 2)
            {
                printf("Estas en el blog, aprovechalo\n");
            }
            else
            {
                printf("Adios");
                estudiando =2;
            }
        }
    }
    else if(strcmp(userName,"Paula") == 0)
    {
        while (estudiando == 1)
        {
            printf("Esto es Platzi Terminal Premium edition, que deseas hacer?\n");
            printf("Ingrese 1 para estudiar, \n2 para leer el blog, \n3 mentoria \ncualquier otro valor para salir\n");
            scanf("%d", &decision);
            if(decision == 1)
            {
                printf("Estas en la seccion de estudio, sacale el maximo provecho\n");
            }
            else if(decision == 2)
            {
                printf("Estas en el blog, aprovechalo\n");
            }
            else if(decision == 3){
                printf("Estas en la seccion de solicitud de mentorias");
            }
            else
            {
                printf("Adios");
                estudiando =2;
            }
        }
    }
    else
    {
        printf("No eres un usuario registrado o escribiste mal tu nombre\n");
        printf("Prueba de nuevo\n");
    }
}
}