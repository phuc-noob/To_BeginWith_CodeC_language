#include<stdio.h>

void main()
{
	int a;
	printf("-------------------\n");
	printf("       MENU       \n");
	printf("-------------------\n");
	printf("1.file\n");
	printf("2.tool\n");
	printf("3.exit\n");
	printf("click every number :", &a);
	scanf_s("%d", &a);
	switch (a)
	{
	case 1:
		printf("---------------\n");
		printf("   MENU FILE   \n");
		printf("---------------\n");
		printf("1.open\n");
		printf("2.new \n");
		printf("3.exit\n");
		int t;
		printf("click every number:", &t);
		scanf_s("%d", &t);
		switch (t)
		{
		case 1: printf("----OPEN----"); break;
		case 2: printf("----new-----"); break;
		case 3: printf("----exit----"); break;
		}
		break;
	case 2: 
		printf("---------------\n");
		printf("   MENU TOOL   \n");
		printf("---------------\n");
		printf("1.choose\n");
		printf("2.exit\n");
		int k;
		printf(" click every mumber :", &k);
		scanf_s("%d", &k);
		switch (k)
		{
		case 1: printf("-----choose------\n"); break;
		case 2: printf("------exit------\n"); break;
		}
		break;
	case 3:printf("-----EXIT-----"); break;
	}
}