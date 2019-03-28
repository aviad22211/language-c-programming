#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 4

typedef struct DataFire {
	int CodeArea;
	int codeDamge;
	int priceD;

}DataFire;

typedef struct TableArea {
	int Area;
	char areaName[20];
}TableArea;


typedef struct Dmage {

	int Cdamge;
	char describe[12];
}Dmage;

//שאלה א
void Search_area_fire(DataFire *A, TableArea *B)
{
	int i, j, count = 0, temp;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (B[i].Area == A[j].CodeArea)
			{
				count++;
			}
		}
		if (count == 0)
		{
			printf("you dont have fire \n code area:%d \n name area:%s\n ", B[i].Area, B[i].areaName);
		}

		count = 0;
	}
}
//שאלה ב
void the_max_and_min_damge_price(DataFire *A, TableArea *B)
{
	int i, index, max = 0, min = 0;
	for (i = 0, min = A[i].priceD; i < N; i++)
	{

		if (A[i].priceD < min)
		{
			min = A[i].priceD;

		}
	}
	for (i = 0, max = A[i].priceD; i < N; i++)
	{
		if (A[i].priceD > max)
		{
			max = A[i].priceD;

		}
	}
	for (i = 0; i < N; i++)
	{
		if (min == A[i].priceD)
		{
			printf("index :%d\n", A[i].CodeArea);
			printf("the small damge:%d\n", min);
		}
		if (max == A[i].priceD)
		{
			printf("index :%d\n", A[i].CodeArea);
			printf("the big price damge :%d\n", max);
		}
	}
}
//שאלה ד
void avg_damge(DataFire *A, TableArea *B)
{
	int i, j, sum, count = 0, index;
	float avg = 0;
	for (i = 0; i < N; i++)
	{
		for (j = i + 1, sum = A[i].priceD; j < N; j++)
		{
			if (A[i].CodeArea == A[j].CodeArea)
			{
				sum = sum + A[i].priceD;
				count++;
			}
		}
		if (count == 0)
		{
			count = 1;
		}
		avg = sum / count;
		index = A[i].CodeArea;
		printf("the area %d %s avg is :%.2f \n ", A[i].CodeArea, B[i].areaName, avg);
		count = 0;
		sum = 0;
	}
}


void main()
{
	DataFire A[N] = { { 1,1,100 },{ 5,84,0 },{ 3,78,120 },{ 7,58,0 } };
	TableArea B[N] = { { 1,"darom" },{ 2,"center" },{ 3,"North" },{ 4,"maarav" } };
	Dmage C[N] = { { 1,"House" },{ 1,"garden" },{ 78,"building" },{ 58,"office" } };
	Search_area_fire(A, B);
	the_max_and_min_damge_price(A, B);
	avg_damge(A, B);
}