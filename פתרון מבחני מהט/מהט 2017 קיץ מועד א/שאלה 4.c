#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *func(char *str)
{
	int i = 0, j = 0 , size, flag = 0;
	char *str2;
	size = strlen(str);
	do
	{
		if (str[i] >= '0' && str[i] <= '9' || str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z' || str[i] == ' ')
		{
			flag = 1;
		}
		else
		{
			flag = 0;
			return(NULL);
		}
		i++;
	} while (str[i] != NULL);

	str2 = (char *)malloc(sizeof(char)*size);
	i = 0;
	while (str[i] != NULL)
	{
		if (i == 0)
		{
			while (str[i] == ' ')
			{
				str2[j] = str[i];
				i++;
				j++;
			}
			if (str[i] >= 'a' && str[i] <= 'z'&&str[i] != NULL)
			{
				str2[j] = str[i] - 32;
				j++;
			}
		}
		else if (str[i] == ' ')
		{
			if (str[i] == ' ')
			{
				str2[j] = str[i];
				i++;
				j++;
			}
			if (str[i] >= 'a' && str[i] <= 'z'&&str[i] != NULL &&str[i] != ' ')
			{
				str2[j] = str[i] - 32;
				j++;

			}

		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			str2[j] = str[i];
			j++;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str2[j] = str[i] - 32;
			j++;
		}
		else
		{
			str2[j] = str[i];
			j++;
		}
		i++;
	} 
	return(str2);
}

void main()
{
	char *str = { "aviad goto" };
	char *temp;
	temp = func(str);
	if (temp != NULL)
	{
		printf("%s\n", temp);
	}

}