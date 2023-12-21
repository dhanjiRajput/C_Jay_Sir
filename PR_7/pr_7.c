#include<stdio.h>
#include<conio.h>
#include "my_function.c"

void main()
{
	printf("Press 1 for +\n");
	printf("Press 2 for -\n");
	printf("Press 3 for *\n");
	printf("Press 4 for /\n");
	printf("Press 5 for Exit\n");
	
	int n,a,b;
	do
	{
		printf("\n\nEnter Your choice :");
		n=getInt();
	
		switch(n)
		{
			case 1:
				printf("Enter A :");
				a=getInt();
				printf("Enter B :");
				b=getInt();
				
				printf("Addition :%d",getsum(a,b));
				break;
			case 2:
				printf("Enter A :");
				a=getInt();
				printf("Enter B :");
				b=getInt();
				
				printf("Addition :%d",getsub(a,b));
				break;
			case 3:
				printf("Enter A :");
				a=getInt();
				printf("Enter B :");
				b=getInt();
				
				printf("Addition :%d",getmul(a,b));
				break;
			case 4:
				printf("Enter A :");
				a=getInt();
				printf("Enter B :");
				b=getInt();
				
				printf("Addition :%d",getdiv(a,b));
				break;
			case 5:
				printf("Enter A :");
				a=getInt();
				printf("Enter B :");
				b=getInt();
				
				printf("Addition :%d",getrem(a,b));
				break;
			case 0:
				printf("Press Any Key to Exit....!");
				getch();
		}
	}while(n!=0);
}

