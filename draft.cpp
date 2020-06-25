#include<stdio.h>
void nhap(int& a, int& b);
float tinhthuong(int x, int y);
void xuat(float kq);

void main()
{
	int a, b;
	nhap(a, b);
	float kq = tinhthuong(a, b);
	xuat(kq);
}

void nhap(int& a, int& b)
{
	scanf_s("%d%d", &a, &b);
}

float tinhthuong(int x, int y )
{
	 float t = (float) x / (float ) y;
	return t;
}

void xuat(float kq)
{
	printf("%f",kq);
}