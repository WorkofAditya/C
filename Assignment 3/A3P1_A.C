/*
This program can print series of numbers using n (inputed by user)
Date: 21th Aug 2025
author: Adityasinh Sodha
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int x = 1, n = 0;
	clrscr();
	printf("input n: ");
	scanf("%d",&n);
	while(x<=n)
	{
	 printf("\n %d",x);
	 x = x + 1;
	}
	getch();

}