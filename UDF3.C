/*
This program perfrom arithnetic oprations using UDF (shorter way)
Date: 20th Aug 2025
Author: Adityasinh Sodha
*/
#include<stdio.h>
#include<conio.h>
void addition(int x, int y);
void main()
{
	int x=0,y=0;
	clrscr();
	printf("enter two number: ");
	scanf("%d %d",&x,&y);
	addition(x,y);
	printf("\nsubtection = %d",x-y);
	printf("\nmultipiction = %d",x*y);
	printf("\nDivision = %.2f",(float)x/y);
	getch();

}
void addition(int x, int y)
{
	int z = 0;
	z = x + y;
	printf("\n addition = %d",z);

}