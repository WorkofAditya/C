/*
This program can perform power oprations
Date: 26th July 2025
Author: Adityasinh Sodha
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()

{
	float x, y;
	clrscr();
	printf("Input first value ");
	scanf("%f",&x);
	printf("Input second value ");
	scanf("%f",&y);
	printf("\n x raised to the power y = %2f",pow(x,y));
	getch();

}
