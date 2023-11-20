#include<stdio.h>
#include<conio.h>
void main()
{
	float n,a,a1,b,b1,c,c1,d,d1;
	clrscr();
	printf("================================\n");
	printf("Enter Electricity Units :");
	scanf("%f",&n);
	printf("================================\n");

	if(n<=50)
	{
		a=n*0.5;
		a1=a+(a*20/100);
		printf("Your Total Electricity Bill = Rs. %.2f",a1);
	}
	else if(n>=51 && n<=150)
	{
		b=n*0.75;
		b1=b+(b*20/100);
		printf("Your Total Electricity Bill = Rs. %.2f",b1);
	}
	else if(n>=151 && n<=250)
	{
		c=n*1.20;
		c1=c+(c*20/100);
		printf("your Total Electrticity Bill = Rs. %.2f",c1);
	}
	else
	{
		d=n*1.50;
		d1=d+(d*20/100);
		printf("Your Total Electricity Bill = Rs. %.2f",d1);
	}
	getch();
}
