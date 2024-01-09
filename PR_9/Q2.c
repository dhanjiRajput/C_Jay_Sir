#include<stdio.h>

struct Student
{
	int rollno;
	char name[20];
	int chem;
	int phy;
	int math;
	int total;
	float per;
};

void main()
{
	int i,n;
	
	printf("Enter Number Of Records :");
	scanf("%d",&n);
	struct Student s1[n];
	
	for(i=0;i<n;i++)
	{
		printf("Student Details :%d\n",i+1);
		printf("Enter Roll No.  :");
		scanf("%d",&s1[i].rollno);
		printf("Enter Name      :");
		scanf("%s",&s1[i].name);
		printf("Enter Chemestry :");
		scanf("%d",&s1[i].chem);
		printf("Enter Maths     :");
		scanf("%d",&s1[i].math);
		printf("Enter Physics   :");
		scanf("%d",&s1[i].phy);
	}
	
	system("cls");
	
	for(i=0;i<n;i++)
	{
		s1[i].total=s1[i].chem + s1[i].math + s1[i].phy;
		s1[i].per=((float)s1[i].total *100) / 300;
	}
	
	for(i=0;i<n;i++)
	{
		printf("\n\n%s (%d)\n",s1[i].name,s1[i].rollno);
		printf("Chemestry :%d\n",s1[i].chem);
		printf("Maths     :%d\n",s1[i].math);
		printf("Physics   :%d\n",s1[i].phy);
		printf("Total     :%d/300\n",s1[i].total);
		printf("Percentage:%.2f",s1[i].per);
	}
}
