/*
This program prints a student's name using string
Date: 4th Spt 2025
Author: Adityasinh Sodha
*/
#include<stdio.h>
#include<conio.h>

void main()

{

	char name[6] = "aditya";
	int x;
	clrscr();
	for(x=0; x<=5; x++)
	{
		printf("\n %c",name[x]);
	}
	getch();

}