/*
This program can print sum of n digits that was inputed by user
Date: 13th sept 2025
Author: Adityasinh Sodha
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int num=0,digit=0,sum=0;
	clrscr();
	printf("enter number: ");
	scanf("%d",&num);

	while(num !=0)
	{
		digit=num%10;
		sum=sum+digit;
		num=num/10;
	}

	printf("sum of digits = %d",sum);
	getch();
}