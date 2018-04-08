#include <stdio.h>
#include <string.h>

int main()
{
    int hour;
    int min;
    int sec;
    char arr[2];

    scanf("%d:%d:%d%s", &hour, &min, &sec, arr);
    
    if(strcmp(arr,"PM") == 0 && hour != 12) hour += 12;
    if(strcmp(arr,"AM") == 0 && hour == 12) hour = 0;

    printf("%02d:%02d:%02d", hour, min, sec);
    return 0;
}
//%02x means print at least 2 digits, prepend it with 0's if there's less