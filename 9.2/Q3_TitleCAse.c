#include<stdio.h>

main()
{
	char name[30];
	int i;
	
	printf("Enter You Name :");
	scanf("%[^\n]",&name);
	
	
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]>=65&&name[i]<=90)
		{
			name[i]=name[i]+32;
		}
	}
	
	if(name[0]>=97&&name[0]<=122)
	{
		name[0]=name[0]-32;
	}
	
	printf("Title Case Name :%s",name);
}
