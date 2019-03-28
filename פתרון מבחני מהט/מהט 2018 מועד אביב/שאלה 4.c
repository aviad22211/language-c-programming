#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *new_str(char *s1, char *s2)
{
	int i,j,gadol, katan, pos, new_size;
	char *p,*p1,*p2;
	if (strlen(s1) >= strlen(s2))
	{
		gadol = strlen(s1);
		katan = strlen(s2);
		p1 = s1;
		p2 = s2;
	}
	else
	{
		gadol = strlen(s2);
		katan = strlen(s1);
		p1 = s2;
		p2 = s1;

	}
	new_size = katan*(gadol - katan + 2) + 1;
	p = (char*)malloc(sizeof(char)*new_size);
	for(i=0;i<katan;i++)
	{
		p[i] = p2[i];
	}

	for (i=katan, pos=katan;i<new_size;i++, pos += katan)
	{
		for(j=0;j<katan;j++)
		{
			p[pos+j] = p1[i + j - katan]; 
        }
	}

	p[new_size - 1] = 0;

	return(p);
}

void main()
{
	char *p, *s1 = "abcdefgh" , *s2 = "good";
	p = new_str(s1,s2);
	printf("your string : %s\n", p);
}