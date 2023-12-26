#include<stdio.h>

void main()
{
	int n,i;
	printf("Enter array Size :");
	scanf("%d",&n);
	
	int a[n];
	int *ptr[n];
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] :",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		ptr[i]=&a[i];
	}
	
	printf("Square of Each Elements :\n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",(*ptr[i])*(*ptr[i]));
	}
}
