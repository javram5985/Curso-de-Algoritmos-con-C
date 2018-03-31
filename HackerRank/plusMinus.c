#include <stdio.h>

int main()
{

    int a[100];
    int i, n;
    float countNeg = 0;
    float countPos = 0;
    float countZero= 0;
    float fractionNeg = 0; 
    float fractionPos = 0; 
    float fractionZero = 0;

    printf("Enter size of array:\n");
    scanf("%d", &n);
    printf("Enter elements in array:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(a[i] < 0)
        {
            countNeg++;
            fractionNeg = countNeg/n;
        }
        else if(a[i] > 0)
        {
            countPos++;
            fractionPos = countPos/n;
        }
        else if(a[i] == 0)
        {
            countZero++;
            fractionZero = countZero/n;
        }
    }

    printf("%f\n", countNeg);
    printf("%f\n", countPos);
    printf("%f\n", countZero);

    printf("%5f\n", fractionNeg);
    printf("%5f\n", fractionPos);
    printf("%5f\n", fractionZero);

}