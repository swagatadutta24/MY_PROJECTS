//CALCULATOR program in c using if-else statement:
#include<stdio.h>
int main()
{
	//declare local variables
	char opt;
	int n1,n2;
	float res;
	printf("Select an operator (+,-,*,/)to perform an operation in C calculator\n");
	scanf("%c",&opt);//take an operator
	printf("Enter the first number:");
	scanf("%d",&n1);//take the first number
	printf("Enter the second number :");
	scanf("%d",&n2);//take the second number
	if (opt=='+')
	{
		res=n1+n2;//addition of two numbers
		printf("Addition of %d and %d is:%f",n1,n2,res);
	}
	else if (opt=='-')
	{
		res=n1-n2;//substraction of two numbers
		printf("Substraction of %d and %d is:%f",n1,n2,res);
	}
	else if (opt=='*')
	{
		res=n1*n2;//multiplication of two numbers
		printf("Multiplication of %d and %d is:%f",n1,n2,res);
	}
	else if (opt=='/')
	{
		if(n2==0)//if n2==0,take another
		{
			printf("\n Divisor cannot be zero.");
			scanf("%d",&n2);
		}
		res=n1/n2;//division of the two numbers
		printf("Division of %d and %d is:%.2f");
	}
	else
	{
		printf("\n You have entered wrong input");
	}
	return 0;
	
}
