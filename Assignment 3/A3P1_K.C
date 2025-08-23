/*
This program can print (A B C D ..... Z) using do while loop
Date: 21st Aug 2025
Author: Adityasinh Sodha
*/
#include <stdio.h>
#include <conio.h>

void main()
{
    char x = 'A', n;
    clrscr();
    printf("Input n: ");
    scanf(" %c", &n);

    while (x <= n)
    {
	printf("%c ", x);
	x++;
    }

    printf("\n");
    getch();
}
