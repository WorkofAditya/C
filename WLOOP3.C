/*
This program can perfrom while loop
Date: 1th Aug 2025
author: Adityasinh Sodha
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int x=1,y=1;
	clrscr();
	while (x <= 22)
	{
	 printf("\n %d",x);
	 x = x + y;
	 y = y + 1;
	}
	getch();

}