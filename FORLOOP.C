/*
This program can print numbers with for loop
Date: 8th Aug 2025
Author: Adityasinh Sodha
*/
#include<stdio.h>
#include<conio.h>

void main ()
{
    int x, y;
    clrscr();
    for(y=1; y<=7; y=y+1)
    {
	for(x=9; x>=1; x=x-2)
	{
		printf(" %d ",x);
	}

	printf("\n");
    }
    getch();
 }

