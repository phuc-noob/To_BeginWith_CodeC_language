/*#include<stdio.h>
void nhap(int& a, int& b, int& c);
int kt(int x, int y, int z,int &t);
void xuat(int min, int t);

void main()

{
	int a, b, c;
	nhap(a, b, c);
	int kq;
	int min = kt(a, b, c,kq);
	xuat(min, kq);
}

void nhap(int& a, int& b, int& c)
{
	scanf_s("%d%d%d", &a, &b, &c);
}

int kt(int x,int y,int z,int &t)
{
	t = 1;
	if (x >= y)
	{
		t = y;
	}
	else
	{
		t = x;
	}
	if (t >= z)
	{
		t = z;
	}
	else
	{
		t = t;
		return t;
	}
}

void xuat(int min, int t)
{
	printf("min %d" ,t);
}*/