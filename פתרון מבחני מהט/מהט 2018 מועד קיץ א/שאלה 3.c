#include<stdio.h>
#define N 20

void main()
{
	int i, j, g = 0, count = 0, amount = 0;
	int a[N] = { 1,2,2,3,4,6,2,7,8,9,9,9,9,9,2,3,4,6,2,9 };
	int b[N] = { 2,2,2,3,4,5,7,8,9,7,12,23,4,5,5,5,5,4,4,7 };
	int c[N * 2];
	for ( i = 0; i < N; i++)
	{
		for ( j = 0; j < N; j++)
		{
			if (a[i] == b[j])
			{
				count++;
				break;
			}
		}
		if (count == 0)
		{
			c[g] = a[i];
			g++;
			amount++;
		}
		count = 0;
	}

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (b[i] == a[j])
			{
				count++;
				break;
			}
		}
		if (count == 0)
		{
			c[g] = b[i];
			g++;
			amount++;
		}
		count = 0;
	}

	for (i = 0; i < amount-1; i++)
	{
			if (c[i] == c[i + 1])
			{
				c[i] = 0;
			}
	}

	for ( i = 0; i < amount; i++)
	{
		if (c[i] != 0)
		{
			printf(",%d", c[i]);
		}
		
	}

}