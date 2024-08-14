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
			printf("*");
		}
		printf("\n");
	}
}
