#include <stdio.h>

int a[3];
int b[3];
int score_a = 0;
int score_b = 0;

void main()
{
    scanf("%d" "%d" "%d", &a[1], &a[2], &a[3]);
    scanf("%d" "%d" "%d", &b[1], &b[2], &b[3]);
    for(int i = 1; i < 4; i++)
    {
        if(a[i] > b[i])
        {
            score_a++;
        }
        else if(b[i] > a[i])
        {
            score_b++;
        }
    }

    printf("%d %d\n", score_a,  score_b);

}