#include<stdio.h>
int diffstr(char *small, char *big)
{
	int i, j, count = 0;
	for ( i = 0,j=0;big[j]!=NULL; j++)
	{
		if (small[i] == big[j])
		{
			if (small[i] != NULL)
			{
				i++;
			}
		}
		else
		{
			count++;
		}
	}
	if (small[i] == NULL)
	{
		return(count);
	}
	else
	{
		return -1;
	}
}

void main()
{
	char small[] = "acxg", big[] = "bancetgye";
	int count = 0;
	count=diffstr(&small, &big);
	printf("%d\n", count);
}