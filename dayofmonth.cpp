#include<stdio.h>
void nhap(int& a, int& b);
int day(int x, int y, int& t);
void xuat(int calendar, int x, int y, int &t);

void main()
{
	int a, b;
	nhap(a, b);
	int k;
	int calendar = day(a, b, k);
	xuat(calendar, a, b, k);
}

void nhap(int& a, int& b)
{
	printf("year :", a);
	scanf_s("%d", &a);
	printf("month:", b);
	scanf_s("%d", &b);
}

int day(int x, int y, int& t)
{
	{
		if (0 < y <= 12)
		{
			if (x % 4 == 0 && x % 100 != 0)
			{
				if (y == 1 || y == 3 || y == 5 || y == 7 || y == 8 || y == 10 || y == 12)
				{
					t = 31;
					return 1;
				}
				if (y == 4 || y == 6 || y == 9 || y == 11)
				{
					t = 30;
					return 2;
				}
				if (y == 2)
				{
					t = 29;
					return 3;
				}
			}
			else
			{
				if (y == 1 || y == 3 || y == 5 || y == 7 || y == 8 || y == 10 || y == 12)
				{
					t = 31;
					return 1;
				}
				if (y == 4 || y == 6 ||y == 9|| y == 11)
				{
					t = 30;
					return 2;
				}
				if (y == 2)
				{
					t = 28;
					return 3;
				}
			}
		}
		if (y <= 0 || y > 12)
			return 0;
	}
		return t;
}
void xuat(int calendar, int x, int y,int &t)
{
	if (calendar == 0)
		printf("no day");
	if (calendar == 1 || calendar == 2 || calendar == 3)
		printf("month :%d year :%d day :%d", y, x, t);
}