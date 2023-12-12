#include<stdio.h>
#include<string.h>

main()
{
	char pass[20];
	int upr=0,lwr=0,sym=0,num=0,i;
	
	printf("Create Your Password :");
	gets(pass);
	
	if(strlen(pass)>=6)
	{
		for(i=0;i<=strlen(pass);i++)
		{
			if(pass[i]>=65&&pass[i]<=90)
			{
				upr=1;
			}
			else if(pass[i]>=97&&pass[i]<=122)
			{
				lwr=1;
			}
			else if(pass[i]>=33&&pass[i]<=47 || pass[i]>=58&&pass[i]<=64)
			{
				sym=1;
			}
			else if(pass[i]>=48&&pass[i]<=57)
			{
				num=1;
			}
		}
		if(upr==1&&lwr==1&&sym==1&&num==1)
		{
			printf("Your Password is Strong");
		}
		else
		{
			printf("Your PassWord is So weak");
		}
	}
	else
	{
		printf("Must Enter 6 letter");
	}
}
