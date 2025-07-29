/*
This program can perform addition with numbers that was inputed by user
Date: 23th july 2025
author: Adityasinh Sodha
*/
#include<stdio.h>
#include<conio.h>

void main()

{
	int a, b, c;
	clrscr();
	printf("Input first number: ");
	scanf("%d",&a);
	printf("Input second number: ");
	scanf("%d",&b);
	c = a + b;
	printf("The Answer is: %d ",c);
	getch();
}


