/*Area Of Circle */
#include<stdio.h>
#include<conio.h>
#define PI 3.14
main()
{
	int r,a;
	clrscr();
	printf("Enter Radious of Circle :");
	scanf("%d",&r);
	a=PI*r*r;

	printf("Area Of Circle %d:",a);
	getch();
}