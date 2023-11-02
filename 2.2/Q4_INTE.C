#include<stdio.h>
#include<conio.h>

void main()
{
	float p,r,n,i;
	clrscr();
	printf("Enter Principle Amount :");
	scanf("%f",&p);
	printf("Enter Rate of Interest :");
	scanf("%f",&r);
	printf("Enter Number Of Years  :");
	scanf("%f",&n);

	i=(p*r*n)/100;
	printf("Simple Interest is %.2f:",i);
	getch();
}