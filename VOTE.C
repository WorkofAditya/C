/*
This program use if to find a spacific age reqired for voting
Date: 19th july 2025
author: Adityasinh Sodha
*/
#include<stdio.h>
#include<conio.h>

void main()

{
	int age;
	clrscr();
	printf("input your age ");
	scanf("%d", &age);
	if(age < 18)
	printf("You cannot vote");
	else
	printf("You can vote");
	getch();
}
