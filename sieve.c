#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sieve(int n)
{
	int length = (int)((n * log(n) * 1.15));
	int array[length];

	for (int i = 1; i <= length; i++)
	{
		array[i] = i;
	}

	for(int i = 1; i <= length; i++)
	{
		printf("%d\n", array[i]);
	}
	return 0;
}

