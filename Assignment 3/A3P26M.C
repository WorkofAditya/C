/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
Date: 6th Oct 2025
Author: Adityasinh Sodha
*/
#include <stdio.h>
#include <conio.h>

void main() 
{
	int x, y, num = 1;
	clrscr();

	for(x = 1; x <= 5; x++)
	{
		for(y = 1; y <= x; y++)
		{
			printf("%d ", num);
			num++;
		}
		printf("\n");
	}
	getch();
}