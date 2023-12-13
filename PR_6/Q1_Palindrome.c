#include<stdio.h>
main()
{
	char name[20];
	char name1[20];
	int i,len=0,cmp=0;
	printf("Enter Any String :");
	scanf("%s",&name);
	
	for(i=0;name[i]!='\0';i++)
	{
		len++;
	}
	
	for(i=0;i<len;i++)
	{
		name1[len-i-1]=name[i];
	}
	
	
	for(i=0;i<len;i++)
	{
		if(name1[i]==name[i])
		{
			cmp=1;
		}
	}
	
	if(cmp==1)
	{
		printf("The String Is Palindrome..");
	}
	else
	{
		printf("The String is not a Palindrome..");
	}
}
