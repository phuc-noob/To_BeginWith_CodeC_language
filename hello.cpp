#include<iostream>
using namespace std;

int getvaluefromuser(const int &nvalue)
{
	cout << "nvalue: " << nvalue;
	return 0;
}

int main()
{
	int x(1);
	getvaluefromuser(x + 5);
	return 0;
}

