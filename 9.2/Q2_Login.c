#include<stdio.h>
#include<string.h>

main()
{
	char email[]="kidechadhanji@gmail.com";
	char pass[]="kidechadhanji";
	
	char uemail[30];
	char upass[30];
	
	printf("Enter Your UseName  :");
	gets(uemail);
	printf("Enter Your PassWord :");
	gets(upass);
	
	if(strcmp(email,uemail)==0 && strcmp(pass,upass)==0)
	{
		printf("Login SuccesFully");
	}
	else
	{
		printf("Login Failed Plz.. Try Again..!");
	}
}
