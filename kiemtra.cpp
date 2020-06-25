#include<stdio.h>
void nhap(int& a, int& b, int& c);
int kt(int x, int y, int z);
void xuat(int tamgiac);

void main()

{
	int a, b, c;
	nhap(a, b, c);
	int tamgiac = kt(a, b, c);
	xuat(tamgiac);
}

void nhap(int& a, int& b, int& c)
{
	printf("a :", a);
	scanf_s("%d", &a);
	printf("b :", b);
	scanf_s("%d", &b);
	printf("c :", c);
	scanf_s("%d", &c);
}

int kt( int x, int y, int z )
{
	{
		int t;
		int k;
		int j;
		t = x * x;
		k = y * y;
		j = z * z;
		if ( ( x + y ) > z && (  y + z ) > x && ( x + z ) > y )
		{
			if (x == y && y == z)
				return 1;
			if (x == y && y != z || x == z && z!= y || y == z && z!= x)
				return 2;
			if ( ( t + k ) == j)
				return 3;
			if (x != y && y != z && x != z)
				return 4;
		}
		else
			return 0;
	}
}

void xuat( int tamgiac )
{
	if (tamgiac == 0)
		printf("not tam giac");
	if (tamgiac == 1)
		printf("tam giac deu");
	if (tamgiac == 2)
		printf("tam giac can");
	if (tamgiac == 3)
		printf("tam giac vuong ");
	if (tamgiac == 4)
		printf("tam giac ");
}