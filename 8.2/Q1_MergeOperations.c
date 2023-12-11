#include<stdio.h>

main()
{
	int i,n1,n2;
	
	printf("Enter Array Size :");;
	scanf("%d",&n1);
	int a[n1];
	printf("Enter Array A Elements :\n");
	for(i=0;i<n1;i++)
	{
		printf("a[%d] :",i);
		scanf("%d",&a[i]);
	}
	
	printf("Enter Array Size :");;
	scanf("%d",&n2);
	int b[n2],c[n1+n2];
	printf("Enter Array B Elements :\n");
	for(i=0;i<n2;i++)
	{
		printf("b[%d] :",i);
		scanf("%d",&b[i]);
	}
	
	printf("Array C is : ");
	for(i=0;i<n1;i++)
	{
		c[i]=a[i];
	}
	
	for(i=0;i<n1+n2;i++)
	{
		c[i+n1]=b[i];
	}
	
	for(i=0;i<n1+n2;i++)
	{
		printf("%d, ",c[i]);
	}
}
