/*
This program can print array using loop
Date: 2nd Sep 2025
Author: Adityasinh Sodha
*/
#include <stdio.h>
#include <conio.h>

void main() {
    int mark[3][4] = {
	{55, 66, 77, 88},
	{50, 60, 70, 80},
	{54, 65, 76, 87}
    };

    int x, y;

    clrscr();

    for (x = 0; x <= 2; x++)
    {
	for (y = 0; y <= 3; y++)
	{
	    printf("%d ", mark[x][y]);
	}
	printf("\n");
    }

    getch();
}
