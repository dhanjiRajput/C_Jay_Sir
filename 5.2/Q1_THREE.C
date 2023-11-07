#include<stdio.h>
#include<conio.h>
#define P printf

main()
{
	int a,b,c;
	clrscr();
	printf("Enter A,B &C Number");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
		if(a<c)
		{
			P("A is Small");
		}
		else
		{
			P("C is Small");
		}
	}
	else
	{
		if(b<c)
		{
			P("B is Small");
		}
		else
		{
			P("C is Small");
		}
	}
	getch();
}