/*
This program calculates the circumstances of a circle
Date: 8th july 2025
Last Change: 9th july 2025
author: Adityasinh Sodha
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	const float pi = 3.14;
	float r, ans;

	clrscr();
	printf("input r:");
	scanf("%f",&r);
	ans = 2 * pi * r;
	printf("The Ans is %f ",ans);
	getch();

}