#include<stdio.h>
#include<conio.h>

int main()
{
	char i='a';
	clrscr();

	do
	{
		printf("%c ",i);
		i=i+4;
	}while(i<='z');
	getch();
}