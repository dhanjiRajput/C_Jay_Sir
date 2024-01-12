#include<stdio.h>


struct Bill
{
	int pro_id;
	char pro_name[20];
	int pro_price;
	int pro_quant;
	int pro_disc;
	int disc;
	int total;	
};

void main()
{
	int n,i;
	FILE *f1;
	
	f1=fopen("bill.txt","w");
	
	printf("Enter Number Of Products :");
	scanf("%d",&n);
	
	struct Bill b1[n];
	
	for(i=0;i<n;i++)
	{
		printf("\n\nEnter Product ID :");
		scanf("%d",&b1[i].pro_id);
		printf("Enter Product Name :");
		scanf("%s",&b1[i].pro_name);
		printf("Enter Product Price :");
		scanf("%d",&b1[i].pro_price);
		printf("Enter Product Quantity :");
		scanf("%d",&b1[i].pro_quant);
		printf("Enter Product Discount :");
		scanf("%d",&b1[i].pro_disc);
		
	}
	
	
	
	fprintf(f1,"ID\tName\t\tPrice\tQuantity Discount\n");
	for(i=0;i<n;i++)
	{
  		fprintf(f1,"%d\t%s\t\t%d\t%d\t   %d\n",b1[i].pro_id,b1[i].pro_name,b1[i].pro_price,b1[i].pro_quant,b1[i].pro_disc);
	}
}
