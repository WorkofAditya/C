/*
This program can print 1 2 3 4 ..... n in in reverse order.
Date: 28th Aug 2025
author: Adityasinh Sodha
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("enter number: ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		printf("\n%d",i);
	}
	getch();
}