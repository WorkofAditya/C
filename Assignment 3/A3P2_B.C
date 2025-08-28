/*
This program can print (1 3 5 7 .... n) in reverse order
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

	for(i=n;i>=1;i=i-2)
	{
		printf("\n%d",i);
	}
	getch();
}