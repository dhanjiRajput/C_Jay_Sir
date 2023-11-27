#include<stdio.h>
#include<conio.h>

void main()
{
	int byear,bmonth,bdate,shesh,fshesh;
	clrscr();
	printf("==============Birth Date===============\n");
	printf("Enter Birth Year    :");
	scanf("%d",&byear);
	printf("Enter Birth Month   :");
	scanf("%d",&bmonth);
	printf("Enter Birth Date    :");
	scanf("%d",&bdate);
	printf("========================================\n");


	if(byear>=1800 && byear<=1899)
	{
		int sadi=3;
		int leap=((((byear-1)-1800)/4)*2)%7;
		int samanya=(((byear-1)-1800)-((byear-1)-1800)/4)%7;

		if(byear%4==0)
		{
			switch(bmonth)
			{
				case 1:
					fshesh=(sadi+leap+samanya+(bdate%7))%7;
					break;
				case 2:
					shesh=3%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 3:
					shesh=4%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 4:
					shesh=7%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 5:
					shesh=9%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 6:
					shesh=12%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 7:
					shesh=14%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 8:
					shesh=17%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 9:
					shesh=20%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 10:
					shesh=22%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 11:
					shesh=25%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 12:
					shesh=27%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
			}
		}
		else
		{
			switch(bmonth)
			{
				case 1:
					fshesh=(sadi+leap+samanya+(bdate%7))%7;
					break;
				case 2:
					shesh=3%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 3:
					shesh=3%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 4:
					shesh=6%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 5:
					shesh=8%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 6:
					shesh=11%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 7:
					shesh=13%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 8:
					shesh=16%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 9:
					shesh=19%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 10:
					shesh=21%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 11:
					shesh=24%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 12:
					shesh=26%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
			}
		}
		switch(fshesh)
		{
			case 0:
				printf("You Were Born on Sunday");
				break;
			case 1:
				printf("You Were Born on Monday");
				break;
			case 2:
				printf("You Were Born on Tuesday");
				break;
			case 3:
				printf("You Were Born on Wednesday");
				break;
			case 4:
				printf("You Were Born on Thursday");
				break;
			case 5:
				printf("You Were Born on Friday");
				break;
			case 6:
				printf("You Were Born on Saturday");
				break;
		}
	}
	else if(byear>=1900 && byear<=1999)
	{
		int sadi=1;
		int leap=((((byear-1)-1900)/4)*2)%7;
		int samanya=(((byear-1)-1900)-((byear-1)-1900)/4)%7;

		if(byear%4==0)
		{
			switch(bmonth)
			{
				case 1:
					fshesh=(sadi+leap+samanya+(bdate%7))%7;
					break;
				case 2:
					shesh=3%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 3:
					shesh=4%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 4:
					shesh=7%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 5:
					shesh=9%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 6:
					shesh=12%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 7:
					shesh=14%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 8:
					shesh=17%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 9:
					shesh=20%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 10:
					shesh=22%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 11:
					shesh=25%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 12:
					shesh=27%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
			}
		}
		else
		{
			switch(bmonth)
			{
				case 1:
					fshesh=(sadi+leap+samanya+(bdate%7))%7;
					break;
				case 2:
					shesh=3%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 3:
					shesh=3%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 4:
					shesh=6%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 5:
					shesh=8%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 6:
					shesh=11%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 7:
					shesh=13%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 8:
					shesh=16%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 9:
					shesh=19%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 10:
					shesh=21%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 11:
					shesh=24%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 12:
					shesh=26%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
			}
		}
		switch(fshesh)
		{
			case 0:
				printf("You Were Born on Sunday");
				break;
			case 1:
				printf("You Were Born on Monday");
				break;
			case 2:
				printf("You Were Born on Tuesday");
				break;
			case 3:
				printf("You Were Born on Wednesday");
				break;
			case 4:
				printf("You Were Born on Thursday");
				break;
			case 5:
				printf("You Were Born on Friday");
				break;
			case 6:
				printf("You Were Born on Saturday");
				break;
		}
	}
	else if(byear>=2000 && byear<=2099)
	{
		int sadi=0;
		int leap=((((byear-1)-2000)/4)*2)%7;
		int samanya=(((byear-1)-2000)-((byear-1)-2000)/4)%7;

		if(byear%4==0)
		{
			switch(bmonth)
			{
				case 1:
					fshesh=(sadi+leap+samanya+(bdate%7))%7;
					break;
				case 2:
					shesh=3%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 3:
					shesh=4%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 4:
					shesh=7%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 5:
					shesh=9%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 6:
					shesh=12%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 7:
					shesh=14%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 8:
					shesh=17%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 9:
					shesh=20%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 10:
					shesh=22%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 11:
					shesh=25%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 12:
					shesh=27%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
			}
		}
		else
		{
			switch(bmonth)
			{
				case 1:
					fshesh=(sadi+leap+samanya+(bdate%7))%7;
					break;
				case 2:
					shesh=3%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 3:
					shesh=3%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 4:
					shesh=6%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 5:
					shesh=8%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 6:
					shesh=11%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 7:
					shesh=13%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 8:
					shesh=16%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 9:
					shesh=19%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 10:
					shesh=21%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 11:
					shesh=24%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
				case 12:
					shesh=26%7;
					fshesh=(shesh+sadi+leap+samanya+(bdate%7))%7;
					break;
			}
		}
		switch(fshesh)
		{
			case 0:
				printf("You Were Born on Sunday");
				break;
			case 1:
				printf("You Were Born on Monday");
				break;
			case 2:
				printf("You Were Born on Tuesday");
				break;
			case 3:
				printf("You Were Born on Wednesday");
				break;
			case 4:
				printf("You Were Born on Thursday");
				break;
			case 5:
				printf("You Were Born on Friday");
				break;
			case 6:
				printf("You Were Born on Saturday");
				break;
		}
	}
	getch();
}
