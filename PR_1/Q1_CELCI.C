#include<stdio.h>
#include<conio.h>

void main()
{
	float c,a;
	clrscr();
	printf("Enter Temperature in Celcious :");
	scanf("%d",&c);

	a = c*1.8+32;

	printf("The Temperature in Fahrenheit :%.2f",a);
	getch();
}
