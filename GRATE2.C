/*
This program can print if given number is bigger smaller or equl to other number
Date: 22th july 2025
author: Adityasinh Sodha
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y;
	clrscr();
	printf("input first number: ");
	scanf("%d", &x);
	printf("input second number: ");
	scanf("%d", &y);

	if(x>y)
	{
		printf("%d is bigger then %d",x,y);
	}

	else if(x<y)
	{
		printf("%d is smaller then %d",x,y);
	}

	else
	{
		printf("%d is equl to %d",x,y);
	}

	getch();



}