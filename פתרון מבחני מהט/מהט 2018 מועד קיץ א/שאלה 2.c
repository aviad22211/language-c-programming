#include<stdio.h>
#define N 5

int funcB(int mat[N][N])
{
	int i = 0, j, min = 0, temp = 0, hekef = 0;
	if (N % 2 == 0)
	{
		hekef = N / 2;
	}
	else
	{
		hekef = N / 2 + 1;
	}
	min = scope_sum_matrix(mat, &i);
	for (i = 0; i < hekef; i++)
	{
		if (min > scope_sum_matrix(mat, &i))
		{
			min = scope_sum_matrix(mat, &i);
			temp = i;
		}
	}
	return(temp);

}

int scope_sum_matrix(int mat[N][N], int *per)
{
	int i, j, max = N, hekef = 0, sum = 0;
	if (N % 2 == 0)//בודק אם המטריצה זוגית או אי זוגית
	{
		hekef = N / 2;//בודק כמה הקפים יש לה
	}
	else
	{
		hekef = N / 2 + 1;//בודק כמה הקפים יש לה
	}

	if (*per > hekef || *per < 0)//אם מספר היקפים לא חוקי הפונקציה תחזיר 0
	{
		return 0;
	}


	for (i = *per; i < N - *per; i++)
	{
		for (j = *per; j < N - *per; j++)
		{
			if (i == *per || i == N - *per - 1 || j == *per || j == N - *per - 1)
			{
				sum += mat[i][j];
			}

		}
	}

	return sum;
}

void main()
{
	int i, j, per = 0, sum;
	int mat[N][N] = { { 1,2,3,4,5 },
	                  { 1,2,3,4,5 },
                   	  { 1,2,29,4,5 },
	                  { 1,2,3,4,5 },
	                  { 1,2,3,4,5 },
	};

	scanf("%d", &per);
	//sum = func(mat, &per);
	//printf("your sum is: %d", sum);


	printf("your sum %d\n", scope_sum_matrix(mat, &per));
	printf("your sum min %d\n", funcB(mat));

}

