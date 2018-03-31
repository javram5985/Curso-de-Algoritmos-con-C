#include <stdio.h>

int search(int vector_entrada[], int n, int x)
{

    int i;
    for(i = 0; i < n; i++)
    {
        if(vector_entrada[i] == x)
        {
            return i;
        }
      
    }

}

int main()
{

    int pos;
    int n = 10;
    int vector_entrada[] = {10, 11, 12, 13, 14, 15, 16, 99, 100, 120};
    
    pos = search(vector_entrada, n, 100);

    printf("%d", pos);

}