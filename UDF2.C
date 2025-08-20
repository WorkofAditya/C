/*
This program perfrom arithnetic oprations using UDF
Date: 20th Aug 2025
Author: Adityasinh Sodha
*/
#include<stdio.h>
#include<conio.h>
void addi();
void main()
{
	int x=0,y=0;
	clrscr();
	printf("enter two number:");
	scanf("%d %d",&x,&y);
	printf("\nsubtection : %d",x-y);
	addi();
	printf("\nmultipiction :%d",x*y);
	addi();
	getch();

}
void addi()
{
	int x=0,y=0,z=0;
	printf("\nenter number :");
	scanf("%d %d",&x,&y);
	z=x+y;
	printf("\nadditone : %d",z);

}