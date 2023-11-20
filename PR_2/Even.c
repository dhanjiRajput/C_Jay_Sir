#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();
	printf("==============================\n");
	printf("Enter Any Number :");
	scanf("%d",&n);
	printf("==============================\n");

	(n%2==0)
		? printf("This number is Even..")
		: printf("This number is Odd...");
	printf("\n==============================");
	getch();
}
