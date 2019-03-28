#include<stdio.h>
#define N 17
int up_max_seq(int num[],int size)
{
	int i, j, count = 0, pos = 0, max = 0;
	for (i = 0; i < size-1; i++)
	{
			for (j = i;j < size-1 ; j++)
			{
				if (num[j] < num[j + 1])
				{
					count++;
				}
				else
				{
					break;
				}
			}
			if (count > max)
			{
				max = count;
				pos = i;
			}
			count = 0;
			i = j;
	}
	return(pos);
}

void main()
{
	int num[N] = { 1,4,7,9,11,10,8,1,2,3,4,5,6,7,8,9,0 };
    int size;
	size = N;
	printf("the posison is : %d\n",up_max_seq(&num, size));
	
}