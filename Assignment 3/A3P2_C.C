/*
This program can print (2 4 6 8 ..... n) in reverse order
Date: 28th Aug 2025
Author: Adityasinh Sodha
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("enter number: ");
	scanf("%d",&n);

	for(i=n;i>=2;i=i-2)
	{
		printf("\n%d",i);
	}

	getch();
}