/* הפונקציה תדפיס את מיקום תחילת הסדרה החשבונית
העולה הגדולה ביותר במערך  */
#include<stdio.h>
#define N 9 
void aviad(int num[N], int size)
{
	int i, j=0, counter = 0,ref=0,temp=0,place;
	
	for (i = 0; i < N;i++)
	{
		ref = num[i+1] - num[i];
			for (j=i ;num[j+1] - num[j] == ref;j++)
			{
				if (num[j] < num[j + 1])
				{
					counter++;	
				}
				
			}
			
			if(counter > temp)
			{
				place = i;
				temp = counter;
			}
			i = j;
			counter = 0;
	}
	printf("your start big num[%d]", place);
}

void main()
{
	int i, num[N],size=N;
	for ( i = 0; i < N; i++)
	{
		scanf("%d", &num[i]);
	}
	
	aviad(num,N);
}