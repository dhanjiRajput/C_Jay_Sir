#include<stdio.h>
#include<conio.h>

void main()
{
	int n,n1,n2,n3;
	clrscr();
	printf("			|============================|\n");
	printf("			| Press 1. for English       |\n");
	printf("			| Press 2. for Hindi         |\n");
	printf("			| Press 3. for Gujarati      |\n");
	printf("			|============================|\n");
	printf("Enter Your Choice : ");
	scanf("%d",&n);

	switch(n)
	{
		case 1 :
			printf("Press 1. for Internet Recharge\n");
			printf("Press 2. for Top-up Recharge\n");
			printf("Press 3. for Special Recharge\n");
			printf("Enter Your Choice :");
			scanf("%d",&n1);
			switch(n1)
			{
				case 1 :
					printf("\nYou have successfully done Internet Recharge");
					break;
				case 2 :
					printf("\nYou have successfully done Top-up Recharge");
					break;
				case 3 :
					printf("\nYou have successfully done Special Recharge");
					break;
				default :
					printf("plz.. Enter Valid Operation as Mention Below..");

			}
			break;
		case 2 :
			printf("Internet Recharge ke liye 1. Dabaiye\n");
			printf("Top-up Recharge   ke liye 2. Dabaiye\n");
			printf("Special Recharge  ke liye 3. Danaiye\n");
			printf("Aapki pasand dakhil kijiye :");
			scanf("%d",&n2);
			switch(n2)
			{
				case 1 :
					printf("\nAapne safaltapurvak Internet Recharge kar liya he.");
					break;
				case 2 :
					printf("\nAapne safaltapurvak Top-up Recharge kar liya he.");
					break;
				case 3 :
					printf("\nAapne safaltapurvak Special Recharge kar liya he.You have successfully done Special Recharge");
					break;
				default :
					printf("Kripiya sahi ank dabaiye");
			}
			break;
		case 3 :
			printf("Internet Recharge mate 1. dabavo\n");
			printf("Top-up Recharge   mate 2. dabavo\n");
			printf("Special Recharge  mate 3. dabavo\n");
			printf("Enter Your Choice :");
			scanf("%d",&n3);
			switch(n3)
			{
				case 1 :
					printf("\nTame safapurvak Internet Recharge karyu che");
					break;
				case 2 :
					printf("\nTame safaltapurvak Top-up Recharge karyu che");
					break;
				case 3 :
					printf("\nTame safalatapurvak Special Recharge karyu che");
					break;
				default :
					printf("krupa karine sacho number nakho..");
			}
			break;
		default :
			printf("Plz.. Enter Valid Operation as Mention Below..");
	}
	getch();

}
