#include<stdio.h>
int main()
{
	int i=1,fact=1,number;
	printf("Enter any number:");
	scanf("%d",&number);
	do
	{
		fact=fact*i;
		i++;
	}while (i<=number);
	printf("factorial of %d:%d",number,fact);
	return 0;
	
}
