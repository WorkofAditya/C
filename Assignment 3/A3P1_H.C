/*
This program can print (1 2 4 7 11 16 ..... n) using while loop
Date: 21st Aug 2025
Author: Adityasinh Sodha
*/
#include<stdio.h>
#include<conio.h>

void main()
{
    int x=1, y=1, n;
    clrscr();
    printf("input n: ");
    scanf("%d",&n);

    while(x <= n)
    {
        printf("\n %d", x);
        y = y + 1;
        x = x + y - 1;
    }

    getch();
}