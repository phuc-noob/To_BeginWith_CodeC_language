#include<stdio.h>
#include<string.h>
void nhap(int& a, int& b,char& t);
float kt(int x, int y,char t,float &k);
void xuat(float math,float &k);

void main()

{
	int a, b;
	char t;
	float i;
	nhap(a, b,t );
	float math = kt (a, b,t,i);
	xuat(math,i);
}

void nhap(int& a, int& b, char& t)
{
	scanf_s("%d%d %c", &a, &b, &t);
}

float kt(int x, int y,char t,float &k)
{
	switch (t)
	{
		case '+':
		{
			k = x + y;
			return 1;
		} break;
		case '-':
		{
			k = x - y;
			return 2;
		}break;
		case '*':
		{	
			k = x * y;
			return 3;
		} break;
		case '/':
		{
			if (y == 0)
				return 0;
			else
			{
				k = float(x) / float(y);
				return 4;
			}
		}
	}
	return k;
}
void xuat (float math,float &k)
{
	if (math == 1 || math == 2 || math == 3 || math == 4)
		printf("result : %f", k);
	else
		printf("not math");
}