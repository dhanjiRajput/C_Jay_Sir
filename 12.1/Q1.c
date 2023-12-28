#include<stdio.h>

struct Student
{
	int stud_id;
	char name[30];
	int stud_age;
	char course[30];
	char city[30];
	int std[30];
	char school[30];
};


void main()
{
	struct Student s1,s2,s3;
	
	printf("Enter Student Id\t:");
	scanf("%d",&s1.stud_id);
	printf("Enter Student Name\t:");
	scanf("%s",&s1.name);
	printf("Enter Student Age\t:");
	scanf("%d",&s1.stud_age);
	printf("Enter Student Course\t:");
	scanf("%s",&s1.course);
	printf("Enter Student City\t:");
	scanf("%s",&s1.city);
	printf("Enter Student Standard\t:");
	scanf("%d",&s1.std);
	printf("Enter Student School\t:");
	scanf("%s",&s1.school);
	
	printf("\n\nEnter Student Id\t:");
	scanf("%d",&s2.stud_id);
	printf("Enter Student Name\t:");
	scanf("%s",&s2.name);
	printf("Enter Student Age\t:");
	scanf("%d",&s2.stud_age);
	printf("Enter Student Course\t:");
	scanf("%s",&s2.course);
	printf("Enter Student City\t:");
	scanf("%s",&s2.city);
	printf("Enter Student Standard\t:");
	scanf("%d",&s2.std);
	printf("Enter Student School\t:");
	scanf("%s",&s2.school);
	
		printf("\n\nEnter Student Id\t:");
	scanf("%d",&s3.stud_id);
	printf("Enter Student Name\t:");
	scanf("%s",&s3.name);
	printf("Enter Student Age\t:");
	scanf("%d",&s3.stud_age);
	printf("Enter Student Course\t:");
	scanf("%s",&s3.course);
	printf("Enter Student City\t:");
	scanf("%s",&s3.city);
	printf("Enter Student Standard\t:");
	scanf("%d",&s3.std);
	printf("Enter Student School\t:");
	scanf("%s",&s3.school);
	
	printf("\n\nStudent Id       :%d\n",s1.stud_id);
	printf("Student Name     :%s\n",s1.name);
	printf("Student Age      :%d\n",s1.stud_age);
	printf("Student Course   :%s\n",s1.course);
	printf("Student City     :%s\n",s1.city);
	printf("Student Standard :%d\n",s1.std);
	printf("Student School   :%s\n",s1.school);
	
	
	
	
	printf("\n\nStudent Id       :%d\n",s2.stud_id);
	printf("Student Name     :%s\n",s2.name);
	printf("Student Age      :%d\n",s2.stud_age);
	printf("Student Course   :%s\n",s2.course);
	printf("Student City     :%s\n",s2.city);
	printf("Student Standard :%d\n",s2.std);
	printf("Student School   :%s\n",s2.school);
	
	

	
	printf("\n\nStudent Id       :%d\n",s3.stud_id);
	printf("Student Name     :%s\n",s3.name);
	printf("Student Age      :%d\n",s3.stud_age);
	printf("Student Course   :%s\n",s3.course);
	printf("Student City     :%s\n",s3.city);
	printf("Student Standard :%d\n",s3.std);
	printf("Student School   :%s\n",s3.school);
}
