#include<stdio.h>
void nhap(float& a);
float kt(float x, int& t);
void xuat(float intfloat, int &t);

void main()
{
	float a;
	nhap(a);
	int t;
	float intfloat = kt(a,t);
	xuat(intfloat,t);
}

void nhap(float& a)
{
	printf("conver float :", a);
	scanf_s("%f", &a);
}

float kt(float x, int& t)
{
	float n;
	n = (x - (int)x) - 0.45 ;
	if (n >= 0)
	{
		t = (int)x + 1;
		return 1;
	}
	else
	{
		t = (int)x;
		return 2;
	}
	return t;
}

void xuat(float intfloat, int &t)
{
	if (intfloat == 1 || intfloat == 2 )
		printf("intfloat:%d",t);
}