#include<stdio.h>
#include<conio.h>

main()
{
	int i=0,n;
	clrscr();
	printf("Enter Any Number :");
	scanf("%d",&n);


	do
	{
		if(i%2==0)
		{
			printf("%d\t",i);
		}
		i++;
	}while(i<=n);
	getch();
}