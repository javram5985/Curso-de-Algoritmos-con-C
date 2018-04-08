#include <stdio.h>

int main() {
    unsigned long long a[5];
    scanf("%lld %lld %lld %lld %lld", &a[0], &a[1], &a[2], &a[3], &a[4]);
    
    unsigned long long tot = 0;
    unsigned long long max = 0;
    unsigned long long min = 1000;
    int i;
    for (i = 0; i < 5; ++i) {
        tot = tot + a[i];// a += b --> a = a + b
        if (a[i] > max) 
        {
            max = a[i];
        }
        if (a[i] < min)
        {
        min = a[i];
        }
    }
    printf("%lld %lld", tot-max, tot-min);
}

/*
i = 0 1 2 3 4 
    1 2 3 4 5

i = 0
tot = tot + a[0] = 0 + 1 = 1
if(1 > 0) max = a[0] = 1
if(1 < 100) min = a[0] = 1

i = 1
tot = tot + a[1] = 1 + 2 = 3
if(2 > 1) max = a[1] = 2
if(2 < 1) no se cumple...

i = 2
tot = tot + a[2] = 3 + 3 = 6
if(3 > 2) max = a[2] = 3
if(3 < 1) no se cumple...

i = 3
tot = tot + a[3] = 6 + 4 = 10
if(4 > 3) max = a[3] = 4
if(4 < 1) no se cumple ...

i = 4
tot = tot + a[4] = 10 + 5 = 15
if(5 > 4) max = a[4] = 5
if(5 < 1) no se cumple

tot - max = 15 - 5 = 10
tot - min = 15 - 1 = 14



*/
