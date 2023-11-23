#include<stdio.h>
#include<conio.h>
main()
{
	int n,rev=0,rem,temp;
	clrscr();

	printf("Enter Any Number :");
	scanf("%d",&n);

	temp=n;

	while(n!=0)
	{
		rem=n%10;

		rev=rev*10+rem;

		n=n/10;
	}

	if(rev==temp)
	{
		printf("Is Palindrome");
	}
	else
	{
		printf("Not Palindrome");
	}

	getch();
}



