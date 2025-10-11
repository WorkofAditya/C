/*
This program input three numbers from udf and print it in main function
Date: 11th Oct 2025
Author: Adityasinh Sodha
*/
#include <stdio.h>
#include <conio.h>

int num1;
float num2;
long int num3;

void val();
void main()
{

	clrscr();
	val();
	printf("\n %d",num1);
	printf("\n %f",num2);
	printf("\n %d",num3);
	getch();
}

void val()
{
	printf("\n input three value:");
	scanf("%d",&num1);
	scanf("%f",&num2);
	scanf("%d",&num3);
}
