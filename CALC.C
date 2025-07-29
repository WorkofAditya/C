/*
This program can perfom addition via user screen
Date: 5th july 2025
Last Change: 9th july 2025
author: Adityasinh Sodha
*/
#include<stdio.h>
#include<conio.h>

void main()
{

	int x, y;
	clrscr();
	printf("\n Enter your first number: ");
	scanf("%d", &x);
	printf("\n Enter your second number: ");
	scanf("%d", &y);
	printf("Your Answer is %d\n",x + y);
	getch();

}