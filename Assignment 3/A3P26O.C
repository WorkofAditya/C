/*
*
* *
* * *
* * * *
* * * * *
Date: 6th Oct 2025
Author: Adityasinh Sodha
*/
#include <stdio.h>
#include <conio.h>

void main()
{
	int i, j;
	clrscr();

	for(i = 1; i <= 5; i++)
	{
		for(j = 1; j <= i; j++)
		{
			printf(" * ");
		}
		printf("\n");
	}
	getch();
}