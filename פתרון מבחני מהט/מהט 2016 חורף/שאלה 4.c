#include<stdio.h>
#define N 5 

int chack_arr(int arr[N][N]);
void main()
{
	int i, j, flag = 0;
	int arr[N][N] = { { 1,0,1,0,0 } ,{ 1,1,1,1,1 } ,{ 0,1,0,1,0 },{ 0,1,0,1,1 },{ 1,1,1,0,1 } };
	flag = chack_arr(arr);
}
int chack_arr(int arr[N][N])
{
	int i, j, index_r = 0, index_c = 0, max = 0, count = 0;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (arr[i][j] == 1)
			{
				count++;
			}
			else if (arr[i][j] == 0)
			{
				if (count > max)
				{
					max = count;
					index_r = i;
					index_c = j - count;
				}
				count = 0;
			}
			else
			{
				return -1;
			}
		}
		if (count > max)
		{
			max = count;
			index_r = i;
			index_c = j - count;
		}
		count = 0;

	}
	printf("The longest sequence is: %d\n", max);
	printf("The beginning of the longest sequence is: [%d][%d]\n", index_r+1 , index_c+1 );
}



