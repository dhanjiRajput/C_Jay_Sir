#include<stdio.h>
#include<conio.h>

void main()
{
	float l,b,a;
	clrscr();
	printf("Enter Lenght of Triangle :");
	scanf("%f",&l);
	printf("Enter Width  of Triangle :");
	scanf("%f",&b);

	a=(l*b)/2;
	printf("Area of Traingle %.2f:",a);
	getch();
}
