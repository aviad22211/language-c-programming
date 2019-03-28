#include<stdio.h>
#include<string.h>
#define N 5

typedef struct student

{
	int student_num;
	char student_name[30];


}Student;

typedef struct courses
{
	int course_num;
	char course_name[30];
	int avg_grade;


}Courses;

void main()
{
	int grade[N][2] = { { 1,50 },{ 2,70 },{ 3,80 },{ 4,75 },{ 5,90 } };
	int i, size, temp;

	Courses array[4] = { { 1,"micro",70 },{ 2,"c",50 },{ 3,"java",70 },{ 4,"cyber",80 } };
	Student stu[N] = { { 1,"aviad" },{ 2,"shimi" },{ 3,"ludmila" },{ 4,"andray" },{ 5,"kim" } };
	/*for (i = 0; i < N; i++)
	{
	printf("Entre number of student %d and grade avg:\n", i + 1);
	for (j = 0; j < 2; j++)
	{
	scanf("%d", &grade[i][j]);
	}
	}*/

	puts("enter number cures");
	scanf("%d", &size);
	for (i = 0; i < 4; i++)
	{

		if (grade[i][1] >= array[size].avg_grade)
		{
			temp = grade[i][0];
			printf("name student :%s\n", stu[temp].student_name);
		}

	}
}
