/*
This program can print (1 3 5 7 .... n) via while loop
Date: 1th Aug 2025
author: Adityasinh Sodha
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int x=1,y=1,n;
	clrscr();
	printf("input n: ");
	scanf("%d",&n);
	while (x <= n)
	{
	 printf("\n %d",x);
	 x = x + y + y;

	}
	getch();

}