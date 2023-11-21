#include<stdio.h>
#include<conio.h>

main()
{
	int choice,a,b;
	clrscr();

	do
	{
		clrscr();
		printf("\nPress 1. for Addition\n");
		printf("Press 2. for Subtraction\n");
		printf("Press 3. for Multiplication\n");
		printf("Press 4. for Division\n");
		printf("Press 0. for Exit..!!\n");
		printf("Enter Your Choice :");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				printf("Enter Value of A:");
				scanf("%d",&a);
				printf("Enter Value of B:");
				scanf("%d",&b);
				printf("Addition :%d",a+b);
				getch();
				break;
			case 2:
				printf("Enter Value of A:");
				scanf("%d",&a);
				printf("Enter Value of B:");
				scanf("%d",&b);
				printf("Subtraction :%d",a-b);
				getch();
				break;
			case 3:
				printf("Enter Value of A:");
				scanf("%d",&a);
				printf("Enter Value of B:");
				scanf("%d",&b);
				printf("Multplication :%d",a*b);
				getch();
				break;
			case 4:
				printf("Enter Value of A:");
				scanf("%d",&a);
				printf("Enter Value of B:");
				scanf("%d",&b);
				printf("Division :%d",a/b);
				getch();
				break;
			case 0:
				break;
			default:
				printf("Invalid Choice...!!");
		}
	}while(choice!=0);

	printf("Press Any Key to Exit..!");
	getch();
}