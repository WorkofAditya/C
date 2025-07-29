/*
 This program calculates the area of a circle
 Date: 8th july 2025
 Last change: 9th july 2025
 author: Adityasinh Sodha
 */
#include<stdio.h>
#include<conio.h>

void main()
{
	float pi,r,ans;
	clrscr();
	printf("input r:");
	scanf("%f",&r);
	pi = 3.14;
	ans = pi * r * r;
	printf("The Ans is %f ",ans);
	getch();

}