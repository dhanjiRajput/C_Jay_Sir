#include<stdio.h>


void getarrayInput(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("a[%d] :",i);
		a[i]=getInt();
	}
}


void getarrayOutput(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("a[%d] :%d\n",i,a[i]);
	}
}

void sum(int a[],int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("The sum of Array :%d",sum);
}

int getInt()
{
	int n;
	scanf("%d",&n);
	return n;
}


void main()
{
	int n;
	printf("Enter array Size :");
	n=getInt();
	
	int a[n];
	
	getarrayInput(a,n);
	getarrayOutput(a,n);
	sum(a,n);
}
