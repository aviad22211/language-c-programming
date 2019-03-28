#include <stdio.h> 
int Sort(int data[], int array_size);
void func(int *arr1, int *arr2);


int main()
{
	int arr1[] = { 25,20,15,10,9,7,5,3,2,-1 };
	int arr2[] = { 30,4,15,1,-1 };
	int i;
	func(arr1, arr2);
	for (i = 0; i < sizeof(arr2) / sizeof(int); i++)
	{
		printf("%d ", arr2[i]);
	}

}


int Sort(int data[], int array_size)
{
	int temp, counter1, counter2,flag=1;
	for (counter1 = 0; counter1<array_size - 2; counter1++)
	{
		for (counter2 = 0; counter2<array_size - counter1 - 1; counter2++)
		{
			if (data[counter2]<data[counter2 + 1] || data[counter2]< 0)
			{
				flag = 0;
				return (flag);
			}
		}
	}
	return(flag);
}

void func(int *arr1, int *arr2)
{
	int i=0, j=0, size=0, flag;
	for ( i = 0; arr1[i] != -1; i++)
	{
		size++;
	}
	size = size + 1;
	flag = Sort(arr1, size);
	if (flag == 0)
	{
		return;
	}
	for (i = 0; arr2[j] != -1; i++)
	{
		for (j = 0; arr1[j] != -1; j++)
		{
			if (arr2[i] > arr1[j])
			{
				arr2[i] = j;
				break;
			}
		}
		if (arr1[j] == -1)
		{
			arr2[i] = j;
		}
	}


}