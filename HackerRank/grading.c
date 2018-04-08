#include <stdio.h>

int main() {

    int n, c, i;
    scanf("%d", &n);
    int arr_grades[100];
    int result[100];

    for(i = 0; i < n; i++)
    {
       scanf("%d", &arr_grades[i]);
       if(arr_grades[i] % 5 != 0 )
        {
            c = arr_grades[i];

            while(c % 5 != 0)   //ej. 88 hasta que el 88 llegue a 90 el while para. c++ le va incrementando 1 al c
            {
                c++;
            }
         
            if((c - arr_grades[i]) < 3 && c >= 40)
                    result[i] = c;
            else
                result[i] = arr_grades[i];
         }
        else
             result[i] = arr_grades[i];
    }
    for(int i = 0; i < n; i++) 
    {
        printf("%d\n", result[i]);
    }
    return 0;
}