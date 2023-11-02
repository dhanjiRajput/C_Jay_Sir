#include<stdio.h>
#include<conio.h>

void main()
{
	int a=12;
	int b=6;
	clrscr();
	printf("\n\n===================================================\n");
	printf("Addition\tof %d and %d is %d\n",a,b,a+b);
	printf("Subtraction\tof %d and %d is %d\n",a,b,a-b);
	printf("Multiplication\tof %d and %d is %d\n",a,b,a*b);
	printf("Division\tof %d and %d is %d\n",a,b,a/b);
	printf("Modulo\t\tof %d and %d is %d\n",a,b,a%b);
	printf("===================================================\n");
	printf("\n%d + %d = %d\n",a,b,a+b);
	printf("%d - %d = %d\n",a,b,a-b);
	printf("%d * %d = %d\n",a,b,a*b);
	printf("%d / %d = %d\n",a,b,a/b);
	printf("%d %% %d = %d\n",a,b,a%b);
	getch();
}
