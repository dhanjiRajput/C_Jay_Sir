#include<stdio.h>

int getInt()
{
	int n;
	scanf("%d",&n);
	return n;
}

int getsum(int a, int b)
{
	return a+b;
}

int getsub(int a, int b)
{
	return a-b;
}

int getmul(int a, int b)
{
	return a*b;
}

int getdiv(int a, int b)
{
	return (float)a/(float)b;
}

int getrem(int a, int b)
{
	return a%b;
}
