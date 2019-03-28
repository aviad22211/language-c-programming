#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int num;
	struct node *next;

}Node;

Node *combine_lists(Node *list1, Node *list2)
{
	int i = 0, j = 0, flag = 1, counter1 = 0;
	Node *curnt1 = list1;
	Node *curnt2 = list2;
	Node *curnt3 = NULL, *head = NULL;
	while (curnt1 != NULL)//1 בודק את אורך הרשימה
	{
		i++;
		curnt1 = curnt1->next;
	}
	while (curnt2 != NULL)//בודק את אורך הרשימה 2
	{
		curnt2 = curnt2->next;
		j++;
	}
	curnt1 = list1;//חוזר לראש הרשימה 1
	curnt2 = list2;//חוזר לראש הרשימה 2
	if (i >= j)
	{
		head = (Node*)malloc(sizeof(Node));
		curnt3 = head;
		curnt3->num = curnt1->num;//מוסיף את המספר ברשימה 1 לרשימה 3
		curnt1 = curnt1->next;//מקדם את רשימה 1
	}
	else
	{
		head = (Node*)malloc(sizeof(Node));
		curnt3 = head;
		curnt3->num = curnt2->num;//מוסיף את המספר ברשימה 2 לרשימה 3
		curnt2 = curnt2->next;//מקדם את רשימה 1
	}


	if (i >= j)//בודק אם הרשימה 1 גדולה מרשימה 2 אז רשימה 2 תהיה מעגלית
	{
		while (curnt1 != NULL)//בודק אם הגעתי לסוף הרשימה 1
		{
			if (flag == 0)
			{
				curnt3->next = (Node*)malloc(sizeof(Node));
				curnt3 = curnt3->next;
				curnt3->num = curnt1->num;//מוסיף את המספר ברשימה 1 לרשימה 3
				curnt1 = curnt1->next;//מקדם את רשימה 1
			}
			flag = 0;
			if (curnt2 != NULL && curnt3 != NULL)//בודק שהרשימה 2 לא נגמר או רשימה 3
			{
				curnt3->next = (Node*)malloc(sizeof(Node));//מקצה עוד זיכרון ל3
				curnt3 = curnt3->next;
				curnt3->num = curnt2->num;//מוסיף את המספר ברשימה 2 לרשימה 3
				curnt2 = curnt2->next;//מקדם את רשימה 2
			}
			else if (curnt2 == NULL && curnt3 != NULL)//בודק אם רשימה 2 מצביע ל'0\' כדי להחזיר אותה לתחילת הרשימה של 2
			{
				curnt2 = list2;//מחזיר את רשימה 2 לתחילת הרשימה
				curnt3->next = (Node*)malloc(sizeof(Node));//מקצה מקום ברשימה 3
				curnt3 = curnt3->next; // מקדם את רשימה 3
				curnt3->num = curnt2->num;//מוסיף את המספר ברשימה 2 לרשימה 3
				curnt2 = curnt2->next;//מקדם את רשימה 2
			}

		}
	}
	else//אחרת הרשימה 2 גדולה מרשימה 1 אז רשימה 1 תהיה מעגלית
	{
		while (curnt2 != NULL)//בודק אם הגעתי לסוף הרשימה 2
		{

			if (flag == 0)
			{
				curnt3->next = (Node*)malloc(sizeof(Node));
				curnt3 = curnt3->next;
				curnt3->num = curnt2->num;//מוסיף את המספר ברשימה 2 לרשימה 3
				curnt2 = curnt2->next;//מקדם את רשימה 1
			}
			flag = 0;
			if (curnt1 != NULL && curnt3 != NULL)//בודק שהרשימה 1 לא נגמר או רשימה 3
			{
				curnt3->next = (Node*)malloc(sizeof(Node));//מקצה עוד זיכרון ל3
				curnt3 = curnt3->next;
				curnt3->num = curnt1->num;//מוסיף את המספר ברשימה 1 לרשימה 3
				curnt1 = curnt1->next;//מקדם את רשימה 1
			}
			else if (curnt1 == NULL && curnt3 != NULL)//בודק אם רשימה 1 מצביע ל'0\' כדי להחזיר אותה לתחילת הרשימה של 2
			{
				curnt1 = list1;//מחזיר את רשימה 1 לתחילת הרשימה
				curnt3->next = (Node*)malloc(sizeof(Node));//מקצה מקום ברשימה 3
				curnt3 = curnt3->next; // מקדם את רשימה 3
				curnt3->num = curnt1->num;//מוסיף את המספר ברשימה 1 לרשימה 3
				curnt1 = curnt1->next;//מקדם את רשימה 1
			}

		}
	}
	return(head);//מחזיר את ראש הרשימה של רשימה 3
}

void main()
{
	Node *list1, *list2, *list3, *curnt1, *curnt2;
	int i;
	list1 = (Node*)malloc(sizeof(Node));
	list2 = (Node*)malloc(sizeof(Node));
	list3 = (Node*)malloc(sizeof(Node));
	curnt1 = list1;
	curnt2 = list2;
	printf("Enter first num for list1: ");
	scanf("%d", &curnt1->num);
	curnt1->next = NULL;
	printf("Enter first num for list2: ");
	scanf("%d", &curnt2->num);
	curnt2->next = NULL;

	for (i = 0; i < 2; i++)
	{
		curnt1->next = (Node*)malloc(sizeof(Node));
		curnt1 = curnt1->next;
		printf("%d please enter number ", i + 1);
		scanf("%d", &curnt1->num);
		curnt1->next = NULL;


	}
	for (i = 0; i < 6; i++)
	{
		puts("enter number list 2");
		curnt2->next = (Node*)malloc(sizeof(Node));
		curnt2 = curnt2->next;
		printf("%d please enter number ", i + 1);
		scanf("%d", &curnt2->num);
		curnt2->next = NULL;

	}
	list3 = combine_lists(list1, list2);
	i = 0;
	while (list3 != NULL)
	{
		printf("%d. number:**%d**\n", i, list3->num);
		i++;
		list3 = list3->next;
	}




}