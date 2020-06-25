#include<stdio.h>
#include<string.h>
void nhap(char& c);
char kt(char x,char &t);
void xuat(char conver, char &t);

void main()
{
	char c;
	nhap(c);
	char k;
	char conver = kt (c , k);
	xuat(conver,k);
}

void nhap(char& c)
{
	printf("word:",c);
	scanf_s("%c",&c);
}

char kt(char x,char &t)
{
	{
		if (x >= 'a' && x <= 'z')
		{
			t = x - 32;
			return 1;
		}
		if (x >= 'A' && x <= 'Z')
		{
			t = x + 32;
			return 2;
		}
		else return 0;
	}
	return t;
}

void xuat(char conver, char &t)
{
	if (conver == 1)
		printf("conver :%c", t);
	if (conver == 2)
		printf("conver :%c", t);
	if (conver == 0)
		printf("no conver");
}