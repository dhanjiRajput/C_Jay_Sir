#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,min;
	clrscr();
	printf("Enter A :");
	scanf("%d",&a);
	printf("Enter B :");
	scanf("%d",&b);
	printf("Enter C :");
	scanf("%d",&c);

	min=(a<b)
		? (a<c)
			? a
			: c
		: (b<c)
			? b
			: c;
	printf("Minimum Number is %d",min);
	getch();
}