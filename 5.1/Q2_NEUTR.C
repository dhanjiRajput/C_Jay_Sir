#include<stdio.h>
#include<conio.h>

main()
{
	int n;
	clrscr();
	printf("Enter Any Number :");
	scanf("%d",&n);

	if(n>0)
	{
		printf("This Number is Positive");
	}
	else if(n==0)
	{
		printf("This Number is Neutral");
	}
	else
	{
		printf("This Number is Negative");
	}
	getch();
}

