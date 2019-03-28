#include<stdio.h>
#include<string.h>
#define N 3
int string(char *s1, char *s2)

{
	int i = 0, j = 0, g = 0, arry[3];

	for (i = 0; s2[i] != NULL; i++)
	{
		if (s2[i] < 'a' && s2[i] > 'z')
		{
			return(0);
		}
	}

	for (i = 0; s2[i] != NULL; i++)
	{
		for (j = i + 1; s2[j] != NULL; j++)
		{
			if (s2[i] == s2[j])
			{
				return(0);
			}
		}
	}

	for (i = 0; s2[i] != NULL; i++)
	{
		for (j = 0; s1[j] != NULL; j++)
		{
			if (s2[i] == s1[j])
			{
				arry[g] = j;
				g++;
				break;
			}
		}
	}
	j = 0;
	for (i = 0, j = j + 1; j<N; i++, j++)
	{
		if (arry[i] > arry[j])
		{
			return(0);
		}
	}
	return(1);
}

void main()
{
	char s1[] = "aghbfecf";
	char s2[] = "abc";
	int flag;
	flag = string(s1, s2);
	printf("%d", flag);
}

