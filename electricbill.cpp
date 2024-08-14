//wacp to calculate elctric bill
#include<stdio.h>
int main()
{
	int unit;
	float amt,total,charge;
	printf("total unit=");
	scanf("%d",&unit);
	if(unit<=50)
	{
		amt=unit * 0.50;
	}
	else if(unit<=250)
	{
		amt=100+((unit-150)*1.20);
	}
	else
	{
		amt=220+((unit-250)*1.50);
	}
	charge=amt*0.20;
	total=amt+charge;
	printf("electric bill=%0.2f",total);
	return 0;
}
