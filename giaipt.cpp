#include<stdio.h>
#include<math.h>
void nhap(int& a, int& b, int& c);
int timx(int m, int n, int k, float &x1, float &x2);
void xuat(int x, float& x1, float& x2, int& a, int& b, int& c);

void main()

{
	int a, b, c;
	nhap(a, b, c);
	float x1, x2;
	int x = timx(a, b, c, x1, x2);
	xuat(x, x1 , x2, a, b, c);
}

void nhap(int& a, int& b, int& c)
{
	printf("a:", a);
	scanf_s("%d", &a);
	printf("b:", b);
	scanf_s("%d", &b);
	printf("c:", c);
	scanf_s("%d", &c);
}

int timx(int m, int n, int k, float &x1, float &x2)
{
	int delta;
	if (m == 0)
		if (n == 0)
			if (k == 0)
				return 3;
			else
				return 0;
		else
		{
			x1 = x2 = (-k) / n;
			return 1;
		}
	else
	{
		delta = n * n - 4 * m * k;
		{
			if (delta > 0)
			{
				x1 = (-n - sqrt(delta)) / (2 * m);
				x2 = (-n + sqrt(delta)) / (2 * m);
				return 2;
			}
			if (delta == 0)
			{
				x1 = x2 = -n / (2 * m);
				return 1;
			}
			else
				return 0;
		}
	}
	return x1;
}

void xuat(int x, float& x1, float& x2, int& a, int& b, int& c)
{ 
	if (x == 0)
		printf("not x ");
	if (x == 1)
		printf("x1=x2=%.2f", x1);
	if (x == 2)
	{
		printf("x1 :%.2f\n", x1);
		printf("x2 :%.2f", x2);
	}
	if (x == 3)
	printf("moi x");
}