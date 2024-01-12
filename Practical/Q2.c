#include<stdio.h>

void loop(s,e)
{
	int f1=0,f2=1,f3,i;
	printf("%d %d ",f1,f2);
	for(i=s;i<=e-1;i++)
	{
		f3=f1+f2;
		printf("%d ",f3);
		f1=f2;
		f2=f3;
	}
}

void main()
{
	int s=2,n;
	printf("Enter Any Number :");
	scanf("%d",&n);
	
	loop(s,n);
}
