#include<stdio.h>
#include<conio.h>

main()
{
	int n1,n2;
	clrscr();
	printf("Enter First Number :");
	scanf("%d",&n1);
	printf("Enter Second Number :");
	scanf("%d",&n2);

	while(n1<=n2)
	{
		if(n1%4==0)
		{
			printf("%d\t",n1);
		}
		n1++;
	}
	getch();
}