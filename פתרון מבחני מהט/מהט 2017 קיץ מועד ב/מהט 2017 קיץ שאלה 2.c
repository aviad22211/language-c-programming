#include<stdio.h>
#define N (data[i][2] * data[i][3] + data[i + 1][2] * data[i + 1][3]) / (data[i][3] + data[i + 1][3])
float max_avg(int data[][4])
{
	int i = 0;
	float avg = 0, max = 0;
	max = N;
	for (i = 0; i < 6; i = i + 2)
	{
		avg = N;
		if (max < avg)
		{
			max = avg;
		}
	}

	for (i = 0; i < 6; i = i + 2)
	{
		if (N == max)
		{
			printf("The stratum with max avg is : %d\n", i / 2);
		}
	}
	return(max);
}

int max_grades_dif(int data[][4])
{
	int i = 0, j = 0, max_def = 0, count, max = 0;
	max_def = data[i][0] - data[i][1];
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 1; j++)
		{
			if (max_def < data[i][0] - data[i][1])
			{
				max_def = data[i][0] - data[i][1];
			}
		}

	}
	for (i = 0; i < 6; i++)
	{
		if (max_def == data[i][0] - data[i][1])
		{
			printf("The row[%d] have max def \n", i);
		}
	}
	return(max_def);
}
void main()
{
	int max = 0, data[6][4] = { { 90,40,80,30 },
	{ 95,65,90,25 },
	{ 100,90,95,20 },
	{ 90,70,85,30 },
	{ 95,75,90,25 },
	{ 90,80,85,30 } };
	max = max_grades_dif(data);
	float max1 = 0;
	printf("The drf max is: %d \n", max);
	max1 = max_avg(data);
	printf("The max avg stratum is: %.2f \n", max1);
}