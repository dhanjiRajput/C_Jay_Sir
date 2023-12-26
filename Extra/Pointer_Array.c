#include<stdio.h>

void main()
{
	int n,i,sum=0;
	printf("Enter Array Length :");
	scanf("%d",&n);
	
	int a[n];
	
	int *ptr;
	
	ptr=&a;
	
	printf("Enter Array Elements :\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] :",i);
		scanf("%d",ptr+i);
	}
	
	printf("\n\nArray Elements :\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] :%d\n",i,*(ptr+i));
	}
	
	
	printf("\nSum Of Array :\n");
	for(i=0;i<n;i++)
	{
		sum=sum+(*(ptr+i));
	}
	printf("%d",sum);
}
