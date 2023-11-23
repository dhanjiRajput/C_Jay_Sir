#include<stdio.h>
#include<conio.h>

main()
{
	int n,i,f=1;
	clrscr();

	printf("Enter Any Number :");
	scanf("%d",&n);
	/*
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("Factorial :%d",f);
	*/
	while(n>=1)
	{
		f=f*n;
		n--;
	}
	printf("Factorial :%d",f);

	getch();
}