#include<stdio.h>

void main()
{
	char name[30];
	int i,j,len=0;
	
	
	printf("Enter Any String :");
	scanf("%s",&name);
	
	char *ptr[30];
	
	for(i=0;name[i]!='\0';i++)
	{
		ptr[i]=&name[i];
	}
	
	for(i=0;ptr[i]!='\0';i++)
	{
		len++;
	}
	
	printf("The Array OF Length is :%d",len);
}
