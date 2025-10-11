/*
This program is a example of pointer to pointer.
Date: 8th Oct 2025
Author: Adityasinh Sodha
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int x = 5;
	int *p = &x;
	int **p1 = &p;
	int ***p2 = &p1;
	clrscr();

	printf("\n %d",x);
	printf("\n %d",*p);
	printf("\n %d",**p1);
	printf("\n %d",***p2);
	getch();
}