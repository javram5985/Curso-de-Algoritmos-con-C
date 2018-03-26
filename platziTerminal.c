#include <stdio.h>
#include <string.h>
//strcmp https://www.tutorialspoint.com/c_standard_library/c_function_strcmp.htm
void main()
{

    char userName[25]; //Arreglo de 25 posiciones, el nombre no puede ser mayor a 25 caracteres
    int decision;

    printf("Bienvenidos a Platzi Terminal\n");
    printf("Ingresa tu nombre de usuario\n");
    scanf("%s", userName);

    printf("Bienvenido %s, vamos a acceder a tu seccion\n", userName);

    if(strcmp(userName,"Julian") == 0)
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
            printf("Adios");
        }

    }
    else if(strcmp(userName,"Juliana") == 0)
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
        }
        
    }
    else if(strcmp(userName,"Paula") == 0)
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
        }
        
    }
    else
    {
        printf("No eres un usuario registrado, registrate o vete\n");
    }

}