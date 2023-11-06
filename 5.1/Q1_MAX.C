#include<stdio.h>
#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;
	clrscr();
	printf("Enter First Number :");
	scanf("%d",&a);
	printf("Enter Second Number:");
	scanf("%d",&b);

	if(a==b)
	{
		printf("Both Number Are same");
	}
	else if(a>b)
	{
		printf("A is Maximum..");
	}
	else
	{
		printf("B is Maximum...");
	}
	getch();
}