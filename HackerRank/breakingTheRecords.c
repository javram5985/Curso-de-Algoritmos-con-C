#include <stdio.h>

int main()
{

    int i, n;
    int arrScores[100000];
    int max, min;
    int arrResult[2];
    int result_n = 2;

    arrResult[0] = 0;
    arrResult[1] = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arrScores[i]);

        if(i == 0)
        {
            max = min = arrScores[i];
        }

        else if(max < arrScores[i])
        {
            arrResult[0]++;
            max = arrScores[i];
        }

        else if(min > arrScores[i])
        {
            arrResult[1]++;
            min = arrScores[i];
        }
    }

    for(i = 0; i < result_n; i++)
    {
        printf("%d ", arrResult[i]);
    }
}

