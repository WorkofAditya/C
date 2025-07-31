/*
This program can perfrom while loop and print 1 to 10 numbers
Date: 29th july 2025
author: Adityasinh Sodha
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int x=1;
	clrscr();
	while (x <= 10)
	{
	 printf("\n %d",x);
	 x = x + 1;
	}
	getch();

}