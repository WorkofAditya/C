/*
This program can detect positive and negative number via user input
Date: 5th Aug 2025
Author: Adityasinh Sodha
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int x,num;
	clrscr();
	printf("enter your number :");
	scanf("%d",&x);
	num=x;
	if(num>0)
	{
		printf("%d number is positive number ",x);
	}
	else if(num<0)
	{
		printf("%d number is negative number ",x);
	}
	else
	{
		printf("%d number is zero ",x);
	}
	getch();

}
