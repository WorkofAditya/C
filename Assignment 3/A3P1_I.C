/*
This program can print (1 2 6 15 31 ..... n) using for loop
Date: 21st Aug 2025
Author: Adityasinh Sodha
*/
#include<stdio.h>
#include<conio.h>

void main()
{
    int x=1, n, y;
    clrscr();
    printf("input n: ");
    scanf("%d",&n);

    for(y=1; x<=n; y++)
    {
	printf("\n %d", x);
	x = x + (y * y);
    }


    getch();
}