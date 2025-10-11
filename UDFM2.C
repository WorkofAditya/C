/*
This program input three numbers from udf and print it in main function
Date: 11th Oct 2025
Author: Adityasinh Sodha
*/
#include<stdio.h>
#include<conio.h>

void val(float num[3]);
void main()
{
	float num[3] = {0};
	clrscr();
	val(num);
	printf("\n %d", (int)num[0]);
	printf("\n %.2f", num[1]);
	printf("\n %d", (int)num[2]);
	getch();
}

void val(float num[3])
{

	printf("\nInput three numbers: ");
	scanf("%f", &num[0]);
	scanf("%f", &num[1]);
	scanf("%f", &num[2]);
}
