#include<stdio.h>
int main()
{
	int i,j,l;
	printf("Enter number of rows/coloumns\n");
	scanf("%d",&l);
	for (int i=0;i<l;i++)
	{
		for (int j=0;j<l;j++)
		{
			printf("*")
		
		{
			if (i==0||i==l-1||j==0||j==l-1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
			printf("\n");
		}}
	}
	
}
