/*
1 1 1 1 1
2 2 2 2
3 3 3
4 4
5
Date: 6th Oct 2025
Author: Adityasinh Sodha
*/
#include <stdio.h>
#include <conio.h>

void main()
 {
	int x, y;
	clrscr();

	for(x = 1; x <= 5; x++)
	{
		for(y = 5; y >= x; y--)
		{
			printf("%2d", x);
		}
		printf("\n");
	}
	getch();
}