#include<stdio.h>

main()
{
	char name[20];
	int i;
	
	printf("Enter Any String Name :");
	scanf("%[^\n]",&name);
	
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]>=65&&name[i]<=97)
		{
			name[i]=name[i]+32;
		}	
	}
	printf("UpperCase String :%s",name);	
}
