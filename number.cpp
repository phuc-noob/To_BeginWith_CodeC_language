#include<stdio.h>
void nhap(int& a);
int kt(int x);
void xuat(int number, int a);

void main()

{
	int a;
	nhap(a);
	int number = kt(a);
	xuat(number, a);
}

void nhap(int& a)

{
	scanf_s("%d", &a);
}

int kt(int x)
{
	if (x >= 0 && x <= 9)
		return 1;
	else
		return 0;
}

void xuat(int number,int a)
{
	if (number == 1)
		printf("number:%d", a);
	else
		printf("not number");
}
