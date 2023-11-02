#include<stdio.h>
#include<conio.h>

void main()
{
	int l,h,a;
	clrscr();
	printf("Enter Length of Rectangle :");
	scanf("%d",&l);
	printf("Enter Width  of Rectangle :");
	scanf("%d",&h);

	a= l*h;
	printf("Area Of Rectangle %d:",a);
	getch();
}