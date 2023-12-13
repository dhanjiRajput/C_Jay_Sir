#include<stdio.h>

main()
{
	char name[20];
	int i,j;
	printf("Enter Any String :");
	gets(name);
	
	int freq[strlen(name)];
	
	for(i=0;i<strlen(name);i++)
	{
		freq[i]=1;
		for(j=i+1;j<strlen(name);j++)
		{
			if(name[i]==name[j])
			{
				freq[i]++;
			}
		}
	}
	
	for(i=0;i<strlen(name);i++)
	{
		printf("%c = %d\n",name[i],freq[i]);
	}
}
