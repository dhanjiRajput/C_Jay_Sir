#include<stdio.h>


float getGrade()
{
	int s1,s2,s3,s4,s5,s6,s7,sum;
	float avg;
	printf("Enter Subjects Marks :\n");
	printf("Enter s1 :");
	scanf("%d",&s1);
	printf("Enter s2 :");
	scanf("%d",&s2);
	printf("Enter s3 :");
	scanf("%d",&s3);
	printf("Enter s4 :");
	scanf("%d",&s4);
	printf("Enter s5 :");
	scanf("%d",&s5);
	printf("Enter s6 :");
	scanf("%d",&s6);
	printf("Enter s7 :");
	scanf("%d",&s7);
	
	sum=s1+s2+s3+s4+s5+s6+s7;
	
	avg=((float)sum*100)/700;
	
	return avg;
}

int getInt()
{
	int n;
	scanf("%d",&n);
	return n;
}


void ArrayInput(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Value[%d] :",i);
		a[i]=getInt();
	}
}

void ArrayOutput(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Array : %d\n",a[i]);
	}
}

void ArraySum(int a[],int b[],int n)
{
	int i,total;
	int c[n];
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
	}
	
	printf("Array Addition :\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",c[i]);
	}
	
	for(i=0;i<n;i++)
	{
		total=total+c[i];
	}
	printf("\nTotal :%d\n",total);
	printf("\nPercentage :%d\n",total/n);
}

void ArraySub(int a[],int b[],int n)
{
	int i;
	int c[n];
	for(i=0;i<n;i++)
	{
		c[i]=a[i]-b[i];
	}
	
	printf("Array Subtraction :\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",c[i]);
	}
	
}
