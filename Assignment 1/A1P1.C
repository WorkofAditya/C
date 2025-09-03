/*
This program can perfom arithmatic opration via user input
Date: 23th july 2025
Modified: 26th july 2025
author: Adityasinh Sodha
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	clrscr();
	printf("\nenter one number:");
	scanf("%d",&x);
	printf("\nenter second number:");
	scanf("%d",&y);
	printf("\n1. Addition %d",x+y);
	printf("\n2. Substraction %d",x-y);
	printf("\n3. Multiplication %d",x*y);
	printf("\n4. Division %.2f",(float)x/y);
	getch();
}
