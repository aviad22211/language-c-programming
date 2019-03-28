#include<stdio.h>
#include<string.h>

float avg_word_len(char * str)
{

	int i, j, count = 0, max = 0;
	float total = 0;
	for (i = 0; str[i] != NULL; i++)
	{
		for (j = i, count = 0; str[j] != NULL; j++)
		{
			if (str[j] == ' ')
			{
				break;
			}
			if ((str[j] < ' ') || (str[j] > ' ' && str[j] < '0') || (str[j] > '9'&&str[j] < 'A') || (str[j] > 'Z'&&str[j] < 'a') || str[j] > 'z')
			{
				return -1;
			}
			count++;
			i = j;
		}
		if (count != 0)
		{
			total = total + count;
			max++;
		}


	}
	return(total / max);
}


void main()
{
	char str[] = "   hello c world";
	float test;
	test = avg_word_len(str);
	printf("%.2f", test);
}


