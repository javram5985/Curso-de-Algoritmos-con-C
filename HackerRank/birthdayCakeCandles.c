#include <stdio.h>

int main()
{

	int colleen_age;
	int candle_height[50];
	int i;
	int n;
	int tallest_candle;
	int count = 0;

	printf("Ingresa la edad de Colleen (numero de candelas):\n");
	scanf("%d", &colleen_age);
	printf("Ingresa el tamano del arreglo:\n");
	scanf("%d", &n);

	printf("Ingresa los tamanos de las candelas:\n");
	for(i = 0; i < n; i++)
	{
		scanf("%d", &candle_height[i]);
	}

	tallest_candle = candle_height[0];

	for(i = 0; i < n; i++)
	{
		if(candle_height[i] > tallest_candle)
		{
			tallest_candle = candle_height[i];
		}
	}
	for(i = 0; i < n; i++)
	{
		if(candle_height[i] == tallest_candle)
		{
			count++;
		}
	}

	printf("%d", count);

}