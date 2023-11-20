#include<stdio.h>
#include<conio.h>

main()
{
	int i=1;
	int n;
	clrscr();
	printf("Enter Any Number :");
	scanf("%d",&n);

	while(i<=n)
	{
		printf("%d\t",i);
		i++;
	}
	getch();
}