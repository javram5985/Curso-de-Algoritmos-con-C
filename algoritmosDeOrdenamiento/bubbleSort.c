#include <stdio.h>

void cambiar_pos(int *n1, int *n2)
{
    
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;

}

void bubbleSort(int vector_entrada[], int n)
{

    int i, j;
    for(i = 0; i < n-1; i++)// n-1 son las veces que vamos a repetir nuestro codigo
    {
        for(j = 0; j < n-i-1; j++)
        {
            if(vector_entrada[j] < vector_entrada[j+1])
            cambiar_pos(&vector_entrada[j], &vector_entrada[j+1]);

        }
    }
}

void printArray(int vector_entrada[], int size)//vector_entrada[] imprime todas las posiciones, por eso dejamos el [] en blanco
{
    int i;
    for(i = 0; i < size; i++)
    {
        printf("%d ", vector_entrada[i]);
    }
    printf("fin del ordenamiento\n");
}

int main()
{
    int vector_entrada[] = {98, 87, 75, 12, 1, 5, 2};
    int n = sizeof(vector_entrada)/sizeof(vector_entrada[0]);//sizeof es una funcion del stdio.h que me da el tamano de un vector, el nenner de la division nunca olvidarlo para cuando es un array!
    bubbleSort(vector_entrada, n);
    printf("Arreglo ordenado\n");
    printArray(vector_entrada, n);
    printf("\n");
    return 0;
}

//https://www.geeksforgeeks.org/sizeof-operator-c/ explicacion de sizeof();
