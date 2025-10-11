/*
This is a example of global var.
Date: 1st Oct 2025
Author: Adityasinh Sodha
*/
#include<stdio.h>
#include<conio.h>

void global();
int num1=5;
void main()
{
	clrscr();
	printf("\n %d",num1);
	global();
	getch();
}

void global()
{
	printf("\n %d",num1);
}