#include<stdio.h>

void main()
{
	int i;
	
	FILE *f1;
	FILE *f2;
	
	f1=fopen("even_file.txt","w");
	f2=fopen("odd_file.txx","w");
	
	if(f1!=NULL && f2!=NULL)
	{
	
		for(i=50;i<=70;i++)
		{
			if(i%2==0)
			{
				fprintf(f1,"%d ",i);
			}
			else
			{
				fprintf(f2,"%d ",i);
			}
		}
		fclose(f1);
		fclose(f2);
	}
	else
	{
		printf("File is Unable to Open");
	}
}
