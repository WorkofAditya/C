/*
This program can print (10 20 30 40 ..... n) in reverse order
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
	i=n;

	while(i>=10)
	{
		printf("\n%d",i);
		i=i-10;
	}
	getch();
}