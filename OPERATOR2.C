/*
This program can compare two numbers inputted by user with oprator
Date: 29th july 2025
Author: Adityasinh Sodha
*/
#include <stdio.h>
#include <conio.h>
void main()
{
	int x,y;
	clrscr();
	printf("input two number:");
	scanf("%d %d",&x,&y);
	(x>y)?
		printf("\n %d is greater than %d",x,y)
	:(x<y)?
		printf("\n %d is smaller than %d",x,y)
	:
		printf("\n %d is equl to %d",x,y);
	getch();
}