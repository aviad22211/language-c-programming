#include<stdio.h>
#include<string.h>
#include<conio.h>
void func_insert(int *player1, int *player2)
{

	puts("Player 1");
	puts("Enter your selection");
	puts("1. Rock");
	puts("2. Paper");
	puts("3. Scissors");
	*player1 = getch();
	while (player1 < 49 || player1 > 51)
	{
		player1 = getch();
	}
	system("cls");

	puts("Player 2");
	puts("Enter your selection");
	puts("1. Rock");
	puts("2. Paper");
	puts("3. Scissors");
	*player2 = getch();
	while (player2 < 49 || player2 > 51)
	{
		player2 = getch();
	}
	system("cls");

}
void func_cal(int *player1, int *player2)
{
		
	if (*player1 == '1' && *player2 == '1')
	{
		FILE *fp;
		char ch;
		fp = fopen("D:\\draw.txt", "rb+");

		if (fp == NULL)
		{
			printf("Error in opening the image");
			fclose(fp);
			exit(0);
		}

		while ((ch = fgetc(fp)) != EOF)
		{
			printf("%c", ch);
		}
		
	}
	if (*player1 == '1' && *player2 == '2')
	{
		FILE *fp;
		char ch;
		fp = fopen("D:\\1-2.txt", "rb+");

		if (fp == NULL)
		{
			printf("Error in opening the image");
			fclose(fp);
			exit(0);
		}

		while ((ch = fgetc(fp)) != EOF)
		{
			printf("%c", ch);
		}
	}
	if (*player1 == '1' && *player2 == '3')
	{
		FILE *fp;
		char ch;
		fp = fopen("D:\\1-3.txt", "rb+");

		if (fp == NULL)
		{
			printf("Error in opening the image");
			fclose(fp);
			exit(0);
		}

		while ((ch = fgetc(fp)) != EOF)
		{
			printf("%c", ch);
		}
	}
	if (*player1 == '2' && *player2 == '1')
	{
		FILE *fp;
		char ch;
		fp = fopen("D:\\2-1.txt", "rb+");

		if (fp == NULL)
		{
			printf("Error in opening the image");
			fclose(fp);
			exit(0);
		}

		while ((ch = fgetc(fp)) != EOF)
		{
			printf("%c", ch);
		}
	}
	if (*player1 == '2' && *player2 == '2')
	{
		FILE *fp;
		char ch;
		fp = fopen("D:\\draw.txt", "rb+");

		if (fp == NULL)
		{
			printf("Error in opening the image");
			fclose(fp);
			exit(0);
		}

		while ((ch = fgetc(fp)) != EOF)
		{
			printf("%c", ch);
		}
	}
	if (*player1 == '2' && *player2 == '3')
	{
		FILE *fp;
		char ch;
		fp = fopen("D:\\2-3.txt", "rb+");

		if (fp == NULL)
		{
			printf("Error in opening the image");
			fclose(fp);
			exit(0);
		}

		while ((ch = fgetc(fp)) != EOF)
		{
			printf("%c", ch);
		}
	}
	if (*player1 == '3' && *player2 == '1')
	{
		FILE *fp;
		char ch;
		fp = fopen("D:\\3-1.txt", "rb+");

		if (fp == NULL)
		{
			printf("Error in opening the image");
			fclose(fp);
			exit(0);
		}

		while ((ch = fgetc(fp)) != EOF)
		{
			printf("%c", ch);
		}
	}
	if (*player1 == '3' && *player2 == '2')
	{
		FILE *fp;
		char ch;
		fp = fopen("D:\\3-2.txt", "rb+");

		if (fp == NULL)
		{
			printf("Error in opening the image");
			fclose(fp);
			exit(0);
		}

		while ((ch = fgetc(fp)) != EOF)
		{
			printf("%c", ch);
		}
	}
	if (*player1 == '3' && *player2 == '3')
	{
		FILE *fp;
		char ch;
		fp = fopen("D:\\darw.txt", "rb+");

		if (fp == NULL)
		{
			printf("Error in opening the image");
			fclose(fp);
			exit(0);
		}

		while ((ch = fgetc(fp)) != EOF)
		{
			printf("%c", ch);
		}
	}
	
}
void main()
{
	int *player1, *player2;
	int flag = 0;
lable:	puts("Wellcome to game rock Paper Scissors");
	    func_insert(&player1, &player2);
	    func_cal(&player1, &player2);
		if (player1 == player2)
		{
			goto lable;
		}

		puts("\nYou want play again");
		puts("1.Yes");
		puts("2.No");
		scanf("%d", &flag);
			while (flag != 0 && flag != 1)
			{
				scanf("%d", &flag);
			}
		if (flag == 1)
		{
			system("cls");
			goto lable;
		}
		

}