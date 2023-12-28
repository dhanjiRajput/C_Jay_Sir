#include<stdio.h>



struct Employee
{
	int id,age,exp;
	char name[30],role[30],city[30],comp[30];
};



void main()
{
	int n,i;
	printf("Enter Number of Records :");
	scanf("%d",&n);
	
	struct Employee e1[n];
	
	for(i=0;i<n;i++)
	{
		printf("Employee Id           :");
		scanf("%d",&e1[i].id);
		printf("Employee Name         :");
		scanf("%s",&e1[i].name);
		printf("Employee Age          :");
		scanf("%d",&e1[i].age);
		printf("Employee Role         :");
		scanf("%s",&e1[i].role);
		printf("Employee City         :");
		scanf("%s",&e1[i].city);
		printf("Employee Experience   :");
		scanf("%d",&e1[i].exp);
		printf("Employee Company Name :");
		scanf("%s",&e1[i].comp);
	}
	
	system("cls");
	for(i=0;i<n;i++)
	{
		
		printf("-------student %d----------\n",i+1);
		printf("Employee ID         :%d\n",e1[i].id);
		printf("Employee Name       :%s\n",e1[i].name);
		printf("Employee Age        :%d\n",e1[i].age);
		printf("Employee Role       :%s\n",e1[i].role);
		printf("Employee City       :%s\n",e1[i].city);
		printf("Employee Experience :%d\n",e1[i].exp);
		printf("Employee Company    :%s\n",e1[i].comp);
	}
	
}
