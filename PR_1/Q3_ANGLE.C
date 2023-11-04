#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c;
	clrscr();
	printf("\n========================================\n");
	printf("Enter First Angle of Triangle :");
	scanf("%d",&a);
	printf("Enter Second Angle of Triangle:");
	scanf("%d",&b);
	printf("========================================\n");

	c=180-(a+b);
	printf("\n\nYour Third angle of this Triangle :%d",c);
	getch();
}