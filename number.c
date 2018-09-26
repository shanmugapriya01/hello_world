#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	clrscr();
	printf("enter the number");
	scanf("%d",i);
	if(i>0)
	{
		printf("the number is positive");
	}
	else if(i==0)
	{
		printf("the number is zero");
	}
	else
	{	
		printf("the number is negative");
	}
	getch();
	return 0;
}