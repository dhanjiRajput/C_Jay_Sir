#include<stdio.h>
#include<conio.h>

main()
{
	int i=1;
	int n;
	clrscr();
	printf("Enter Any Number :");
	scanf("%d",&n);

	while(n>=i)
	{
		if(n%2!=0)
		{
			printf("%d\t",n);
		}
		n--;
	}
	getch();
}