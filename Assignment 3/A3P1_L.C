/*
This program can print (a b c d ..... z) using do while loop
Date: 23st Aug 2025
Author: Adityasinh Sodha
*/
#include <stdio.h>
#include <conio.h>

void main()
{
    char x = 'a', n;
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
