#include<stdio.h>
void nhap(int& a, int& b, int& c);
int kt(int x, int y, int z, int& t, int& k, int& n);
void xuat(int time, int& t, int& k, int& n);

void main()
{
	int a, b, c;
	nhap(a, b, c);
	int t;
	int k;
	int n;
	int time = kt(a, b, c, t, k, n);
	xuat(time, t, k, n);
}

void nhap(int& a, int& b, int& c)
{
	printf("hour:", a);
	scanf_s("%d", &a);
	printf("minute:", b);
	scanf_s("%d", &b);
	printf("second:", c);
	scanf_s("%d", &c);
}

int kt(int x, int y, int z,int &t,int &k,int &n)
{
	if ((0 <= x && x < 24) && (0 <= y && y < 60) && (0 <= z && z < 60))
	{
		if (z == 59)
		{
			if (y == 59)


				if (x == 23)

				{
					t = 00;
					k = 00;
					n = 00;
					return 1;
				}
				else
				{
					t = 00;
					k = 00;
					n = x + 1;
					return 2;
				}

			else
			{
				t = 00;
				k = y + 1;
				n = x;
				return 3;
			}
		}
		else
		{
			t = z + 1;
			k = y;
			n = x;
			return 4;
		}
	}
	else
		return 0;
}

void xuat(int time, int& t, int& k, int& n)
{
	if (time == 0)
		printf("no time");
	if (time == 1 || time == 2 || time == 3 || time == 4 )
		printf("time after one second:%02d:%02d:%02d", n, k, t);
}