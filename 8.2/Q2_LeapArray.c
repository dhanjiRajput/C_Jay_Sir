#include<stdio.h>

main()
{
	int n1,n2,i;
	
	printf("Enter the First Number  :");
	scanf("%d",&n1);
	printf("Enter the Second Number :");
	scanf("%d",&n2);
	
	int size=(n2-n1)/4+1;
	
	int a[size],index=0;
	
	for(i=n1;i<=n2;i++)
	{
		if(i%4==0)
		{
			a[index]=i;
			index++;
		}
	}
	
	printf("Leap year is : ");
	for(i=0;i<index;i++)
	{
		printf("%d, ",a[i]);
	}
}
