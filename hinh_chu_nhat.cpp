#include<stdio.h>
void nhap(int& a, int& b);
float giatri(int x, int y);
int giatri1(int x, int y);
void xuat(float t, int d);

void main()
{
	int a, b;
	nhap(a, b);
	float cv = giatri(a, b);
	int dientich = giatri1(a, b);
	xuat(dientich,cv);
}

void nhap(int& a, int& b)
{
	scanf_s("%d%d", &a, &b);
}

float giatri(int x, int y)
{
	float t;
	t = (x + y)/2;
	return(t);
}
int giatri1(int i, int j)
{
	int d;
	d = i*j;
	return(d);
}
void xuat(float t, int d)

{
	printf("%d %.2f", d, t);
}