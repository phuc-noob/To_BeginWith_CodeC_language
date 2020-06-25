#include<stdio.h>
void nhap(int& a);
int gt(int x);
void xuat(int gt);

void main()
{
	int a;
	nhap(a);
	int giatri = gt(a);
	xuat(giatri);
}

void nhap(int& a)
{
	scanf_s("%d", &a);
}

int gt(int x)
{
	int t;
		if (x > 0)
			t = x;
		else t =-x;
	return (t);
}

void xuat(int gt)
{
	printf("%d", gt);
}